@echo off
rem cmd.exe version of manage.sh. Same commands, same environment variables.
setlocal EnableExtensions EnableDelayedExpansion

set "SCRIPT_DIR=%~dp0"
if "%SCRIPT_DIR:~-1%"=="\" set "SCRIPT_DIR=%SCRIPT_DIR:~0,-1%"

rem daslang checkout the module is built against. Scripts must run with this same daslang.
if not defined DASLANG_REPO set "DASLANG_REPO=D:\Projects\CPP_Projects\Daslang\daslangRepo\daScript"
if not defined LIBCLANG_DIR set "LIBCLANG_DIR=C:\Programs\libClang"
if not defined CMAKE_GENERATOR_NAME set "CMAKE_GENERATOR_NAME=Visual Studio 18 2026"

set "DASLANG=%DASLANG_REPO%\bin\Release\daslang.exe"
set "DASRAYLIB_DIR=%SCRIPT_DIR%\dasRaylib"
set "BUILD_DIR=%SCRIPT_DIR%\_build"

rem No cmake on PATH: fall back to the one bundled with Visual Studio.
where cmake >nul 2>&1 || call :find_vs_cmake

set "CMD=%~1"
rem Everything after the command, passed through to gen-docs / fmt / run.
set "REST="
:collect_args
shift
if "%~1"=="" goto :dispatch
set REST=!REST! %1
goto :collect_args

:dispatch
if "%CMD%"==""         goto :usage
if /i "%CMD%"=="help"     goto :usage
if /i "%CMD%"=="gen"      goto :cmd_gen
if /i "%CMD%"=="build"    goto :cmd_build
if /i "%CMD%"=="run"      goto :cmd_run
if /i "%CMD%"=="test"     goto :cmd_test
if /i "%CMD%"=="gen-docs" goto :cmd_gen_docs
if /i "%CMD%"=="fmt"      goto :cmd_fmt
if /i "%CMD%"=="package"  goto :cmd_package
echo Unknown command: %CMD%
call :print_usage
exit /b 1

:usage
call :print_usage
exit /b 0

:print_usage
echo Usage: %~nx0 ^<command^> [args]
echo.
echo Commands:
echo   gen                Regenerate dasRaylib\src\* with dasClangBind (raylib, raymath, rcamera, rlgl, raygui)
echo                      Uses %%DASLANG_REPO%%, %%LIBCLANG_DIR%%; %%RAYLIB_DIR%% is optional (default: the fetched raylib)
echo   build              Fetch raylib and build _build\Release\dasModuleRaylibGen.shared_module
echo                      Uses %%DASLANG_REPO%%
echo   run [script.das]   Run a script with dasRaylib loaded (default: dasRaylib\examples\hello_raylib.das)
echo   test               Run the tests\ suites (no window needed)
echo   gen-docs [--check] Regenerate docs\cheatsheet.html from the built module and the raylib headers
echo                      With --check, fail if the committed page is out of date instead of writing it
echo   fmt [--verify]     Format the .das sources in place; with --verify, only report differences
echo   package            Bundle built artifacts into dist\raylib\ for use as a modules\ package
echo   help               Show this help message
echo.
echo After a raylib update: gen, build, test, gen-docs.
exit /b 0

:find_vs_cmake
set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%VSWHERE%" exit /b 0
for /f "usebackq delims=" %%i in (`"%VSWHERE%" -latest -prerelease -property installationPath`) do set "VS_PATH=%%i"
set "VS_CMAKE=%VS_PATH%\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin"
if exist "%VS_CMAKE%\cmake.exe" set "PATH=%VS_CMAKE%;%PATH%"
exit /b 0

:configure
echo ==^> Configuring dasRaylib (DASLANG_DIR=%DASLANG_REPO%)
cmake -G "%CMAKE_GENERATOR_NAME%" -S "%SCRIPT_DIR%" -B "%BUILD_DIR%" -DDASLANG_DIR="%DASLANG_REPO%" -DCMAKE_BUILD_TYPE=Release
exit /b %errorlevel%

:cmd_gen
set "GEN_RAYLIB_DIR=%RAYLIB_DIR%"
if not defined GEN_RAYLIB_DIR (
    rem Configuring fetches raylib and copies its public headers here, under include\
    call :configure || exit /b 1
    set "GEN_RAYLIB_DIR=%BUILD_DIR%\_deps\raylib-build\raylib"
)
rem The binder clears dasRaylib\src before it reads the headers, so a bad path would wipe the sources.
if not exist "%GEN_RAYLIB_DIR%\include\raylib.h" (
    echo ERROR: %GEN_RAYLIB_DIR%\include\raylib.h not found. Fix or unset RAYLIB_DIR.
    exit /b 1
)
set "GEN_RAYGUI_DIR=%RAYGUI_DIR%"
if not defined GEN_RAYGUI_DIR set "GEN_RAYGUI_DIR=%BUILD_DIR%\_deps\raylib-src\examples\shapes"
if not exist "%GEN_RAYGUI_DIR%\raygui.h" (
    echo ERROR: %GEN_RAYGUI_DIR%\raygui.h not found. Run build first, or set RAYGUI_DIR.
    exit /b 1
)
echo ==^> Generating dasRaylib bindings (daslang: %DASLANG_REPO%, raylib: %GEN_RAYLIB_DIR%)
set "RAYLIB_DIR=%GEN_RAYLIB_DIR%"
set "RAYGUI_DIR=%GEN_RAYGUI_DIR%"
rem Capture to a file so the binder's exit code survives the [I] log filter.
set "GEN_LOG=%TEMP%\dasRaylib_gen_%RANDOM%.log"
"%DASLANG%" "%DASRAYLIB_DIR%\bind\bind_raylib.das" > "%GEN_LOG%" 2>&1
set "GEN_RC=%errorlevel%"
findstr /l /v /b /c:"[I]" "%GEN_LOG%"
del "%GEN_LOG%" >nul 2>&1
exit /b %GEN_RC%

:cmd_build
call :configure || exit /b 1
echo ==^> Building
cmake --build "%BUILD_DIR%" --config Release || exit /b 1
echo ==^> Done: %BUILD_DIR%\Release\dasModuleRaylibGen.shared_module
exit /b 0

:cmd_run
set "RUN_SCRIPT=%REST%"
if not defined RUN_SCRIPT set RUN_SCRIPT="%DASRAYLIB_DIR%\examples\hello_raylib.das"
"%DASLANG%" -load_module "%SCRIPT_DIR%" %RUN_SCRIPT%
exit /b %errorlevel%

:cmd_test
"%DASLANG%" -load_module "%SCRIPT_DIR%" "%DASLANG_REPO%\dastest\dastest.das" -- --test "%SCRIPT_DIR%\tests"
exit /b %errorlevel%

:cmd_gen_docs
"%DASLANG%" -load_module "%SCRIPT_DIR%" "%SCRIPT_DIR%\docs\gen\gen_cheatsheet.das" -- --root "%SCRIPT_DIR%" --raylib-src "%BUILD_DIR%\_deps\raylib-src" %REST%
exit /b %errorlevel%

:cmd_fmt
"%DASLANG%" "%DASLANG_REPO%\utils\das-fmt\dasfmt.das" -- --path "%DASRAYLIB_DIR%\raylib" --path "%DASRAYLIB_DIR%\bind" --path "%DASRAYLIB_DIR%\examples" --path "%SCRIPT_DIR%\tests" --path "%SCRIPT_DIR%\docs\gen" %REST%
exit /b %errorlevel%

:cmd_package
set "SRC_RELEASE=%BUILD_DIR%\Release"
set "OUT_DIR=%SCRIPT_DIR%\dist\raylib"
if not exist "%SRC_RELEASE%\dasModuleRaylibGen.shared_module" (
    echo ERROR: _build\Release\dasModuleRaylibGen.shared_module not found. Run build first.
    exit /b 1
)
echo ==^> Packaging into %OUT_DIR%
if exist "%OUT_DIR%" rmdir /s /q "%OUT_DIR%"
mkdir "%OUT_DIR%\_build\Release" || exit /b 1
mkdir "%OUT_DIR%\dasRaylib\raylib" || exit /b 1
copy /y "%SCRIPT_DIR%\.das_module"  "%OUT_DIR%\.das_module"  >nul || exit /b 1
copy /y "%SCRIPT_DIR%\.das_package" "%OUT_DIR%\.das_package" >nul || exit /b 1
copy /y "%SCRIPT_DIR%\LICENSE"      "%OUT_DIR%\LICENSE"      >nul || exit /b 1
copy /y "%SRC_RELEASE%\dasModuleRaylibGen.shared_module" "%OUT_DIR%\_build\Release\" >nul || exit /b 1
copy /y "%SRC_RELEASE%\raylib.dll"                       "%OUT_DIR%\_build\Release\" >nul || exit /b 1
copy /y "%DASRAYLIB_DIR%\raylib\raylib_boost.das"        "%OUT_DIR%\dasRaylib\raylib\" >nul || exit /b 1
echo ==^> Done. Copy dist\raylib\ into your project's modules\ folder:
echo     xcopy /e /i "%OUT_DIR%" ^<your_project^>\modules\raylib
exit /b 0

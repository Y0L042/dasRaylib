#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# daslang checkout the module is built against. Scripts must run with this same daslang.
DASLANG_REPO="${DASLANG_REPO:-D:/Projects/CPP_Projects/Daslang/daslangRepo/daScript}"
LIBCLANG_DIR="${LIBCLANG_DIR:-C:/Programs/libClang}"
CMAKE_GENERATOR_NAME="${CMAKE_GENERATOR_NAME:-Visual Studio 18 2026}"

DASLANG="$DASLANG_REPO/bin/Release/daslang.exe"
DASRAYLIB_DIR="$SCRIPT_DIR/dasRaylib"
BUILD_DIR="$SCRIPT_DIR/_build"

usage() {
    echo "Usage: $0 <command> [args]"
    echo ""
    echo "Commands:"
    echo "  gen                Regenerate dasRaylib/src/* with dasClangBind (raylib, raymath, rcamera, rlgl, raygui)"
    echo "                     Uses \$DASLANG_REPO, \$LIBCLANG_DIR; \$RAYLIB_DIR is optional (default: the fetched raylib)"
    echo "  build              Fetch raylib and build _build/Release/dasModuleRaylibGen.shared_module"
    echo "                     Uses \$DASLANG_REPO"
    echo "  run [script.das]   Run a script with dasRaylib loaded (default: dasRaylib/examples/hello_raylib.das)"
    echo "  test               Run the tests/ suites (no window needed)"
    echo "  gen-docs [--check] Regenerate docs/cheatsheet.html from the built module and the raylib headers"
    echo "                     With --check, fail if the committed page is out of date instead of writing it"
    echo "  fmt [--verify]     Format the .das sources in place; with --verify, only report differences"
    echo "  package            Bundle built artifacts into dist/raylib/ for use as a modules/ package"
    echo "  help               Show this help message"
    echo ""
    echo "After a raylib update: gen, build, test, gen-docs."
}

configure() {
    echo "==> Configuring dasRaylib (DASLANG_DIR=$DASLANG_REPO)"
    cmake -G "$CMAKE_GENERATOR_NAME" -S "$SCRIPT_DIR" -B "$BUILD_DIR" \
        -DDASLANG_DIR="$DASLANG_REPO" \
        -DCMAKE_BUILD_TYPE=Release
}

cmd_gen() {
    local raylib_dir="${RAYLIB_DIR:-}"
    if [[ -z "$raylib_dir" ]]; then
        # Configuring fetches raylib and copies its public headers here, under include/
        configure
        raylib_dir="$BUILD_DIR/_deps/raylib-build/raylib"
    fi
    # The binder clears dasRaylib/src before it reads the headers, so a bad path would wipe the sources.
    if [[ ! -f "$raylib_dir/include/raylib.h" ]]; then
        echo "ERROR: $raylib_dir/include/raylib.h not found. Fix or unset RAYLIB_DIR."
        exit 1
    fi
    local raygui_dir="${RAYGUI_DIR:-$BUILD_DIR/_deps/raylib-src/examples/shapes}"
    if [[ ! -f "$raygui_dir/raygui.h" ]]; then
        echo "ERROR: $raygui_dir/raygui.h not found. Run build first, or set RAYGUI_DIR."
        exit 1
    fi
    echo "==> Generating dasRaylib bindings (daslang: $DASLANG_REPO, raylib: $raylib_dir)"
    RAYLIB_DIR="$raylib_dir" RAYGUI_DIR="$raygui_dir" LIBCLANG_DIR="$LIBCLANG_DIR" \
        "$DASLANG" "$DASRAYLIB_DIR/bind/bind_raylib.das" \
        | { grep -v '^\[I\]' || true; }
}

cmd_build() {
    configure
    echo "==> Building"
    cmake --build "$BUILD_DIR" --config Release
    echo "==> Done: $BUILD_DIR/Release/dasModuleRaylibGen.shared_module"
}

cmd_run() {
    local script="${1:-$DASRAYLIB_DIR/examples/hello_raylib.das}"
    "$DASLANG" -load_module "$SCRIPT_DIR" "$script"
}

cmd_test() {
    "$DASLANG" -load_module "$SCRIPT_DIR" "$DASLANG_REPO/dastest/dastest.das" -- --test "$SCRIPT_DIR/tests"
}

cmd_gen_docs() {
    "$DASLANG" -load_module "$SCRIPT_DIR" "$SCRIPT_DIR/docs/gen/gen_cheatsheet.das" -- \
        --root "$SCRIPT_DIR" --raylib-src "$BUILD_DIR/_deps/raylib-src" "$@"
}

cmd_fmt() {
    "$DASLANG" "$DASLANG_REPO/utils/das-fmt/dasfmt.das" -- \
        --path "$DASRAYLIB_DIR/raylib" --path "$DASRAYLIB_DIR/bind" --path "$DASRAYLIB_DIR/examples" \
        --path "$SCRIPT_DIR/tests" --path "$SCRIPT_DIR/docs/gen" "$@"
}

cmd_package() {
    local src_release="$BUILD_DIR/Release"
    local out_dir="$SCRIPT_DIR/dist/raylib"

    if [[ ! -f "$src_release/dasModuleRaylibGen.shared_module" ]]; then
        echo "ERROR: _build/Release/dasModuleRaylibGen.shared_module not found. Run build first."
        exit 1
    fi

    echo "==> Packaging into $out_dir"
    rm -rf "$out_dir"
    mkdir -p "$out_dir/_build/Release" "$out_dir/dasRaylib/raylib"

    cp "$SCRIPT_DIR/.das_module"  "$out_dir/.das_module"
    cp "$SCRIPT_DIR/.das_package" "$out_dir/.das_package"
    cp "$SCRIPT_DIR/LICENSE"      "$out_dir/LICENSE"
    cp "$src_release/dasModuleRaylibGen.shared_module" "$out_dir/_build/Release/"
    cp "$src_release/raylib.dll"                       "$out_dir/_build/Release/"
    cp "$DASRAYLIB_DIR/raylib/raylib_boost.das"        "$out_dir/dasRaylib/raylib/"

    echo "==> Done. Copy dist/raylib/ into your project's modules/ folder:"
    echo "    cp -r $out_dir <your_project>/modules/raylib"
}

case "${1:-}" in
    gen)       cmd_gen ;;
    build)     cmd_build ;;
    run)       cmd_run "${2:-}" ;;
    test)      cmd_test ;;
    gen-docs)  shift; cmd_gen_docs "$@" ;;
    fmt)       shift; cmd_fmt "$@" ;;
    package)   cmd_package ;;
    help|"")   usage ;;
    *)         echo "Unknown command: $1"; usage; exit 1 ;;
esac

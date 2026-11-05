cmake_minimum_required(VERSION 3.22)
project(raylib_daslang CXX)

# Package entry point: `daspkg install` configures this directory with -DDASLANG_DIR=...
# dasRaylib fetches and builds raylib itself, so nothing else has to be installed.
# The older hand-written module lives in rl_das/ (see `manage.sh build-module`).
#
#   cmake -S . -B _build -DDASLANG_DIR=C:/path/to/daslang
#   cmake --build _build --config Release
add_subdirectory(dasRaylib)

#pragma once

// Parse/compile entry point for the dasClangBind raylib binder.
// Include order matters: raylib.h defines the RL_*_TYPE guards, so raymath.h
// skips its own Vector2/3/4, Quaternion and Matrix definitions. rcamera.h only
// redefines types under RCAMERA_STANDALONE (left undefined here).
#include <raylib.h>
#include <raymath.h>
#include <rcamera.h>

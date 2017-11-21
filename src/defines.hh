#pragma once

//#define USE_RAYTRACER
//#define USE_PATHTRACER
#define USE_MDT
//#define USE_OPENCL

#define WIDTH 512
#define HEIGHT 512

// For CPU Rendering
#define MAX_THREADS_X 2
#define MAX_THREADS_Y 2

// Pathtracer setings
#define SAMPLES_COUNT 2048
#define MAX_DEPTH 3

// For OpenCL
#define PX_PER_THREAD_X 1
#define PX_PER_THREAD_Y 1
#define LOCAL_SIZE_X 32
#define LOCAL_SIZE_Y 32

// Raytracer settings
#define SOFT_SHADOW_SAMPLES 4
#define SOFT_SHADOW_RADIUS 0.005

// MDT settings
#define IR_RAY_PER_LIGHT 64

#define KERNEL_PATH "../kernels/rendering.cl"
#define KERNEL_NAME "raytracer"
#define STRIDE 4 //(RGBA)


#pragma once

#include <stdint.h>

#include "pathtracer_scene.hh"
#include "raytracing.hh"

namespace pathtracer
{
    typedef struct render_info {
        uint8_t* output_frame;
        float* depth_buffer;

        uint32_t width;
        uint32_t height;
    } render_info_t;

    void render_scene(scene_t *scene);
    vec3_t render_pixel(scene_t *scene, ray_t ray, uint32_t bounce = 0);

    bool intersect_object(scene_t *scene, object_sphere_t *o, ray_t r, hit_t *out);
    bool intersect_object(scene_t *scene, object_plane_t *o, ray_t r, hit_t *out);
    bool intersect_object(scene_t *scene, object_mesh_t *o, ray_t r, hit_t *out);
}
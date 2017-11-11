#pragma once

#include "vectors.hh"

typedef struct ray
{
    vec3_t origin;
    vec3_t direction;
} ray_t;

typedef struct intersection {
    vec3_t position;
    vec3_t normal;
} hit_t;

uint8_t intersect_sphere(ray_t r, vec3_t center, double rad, hit_t *out);
uint8_t intersect_plane(ray_t r, vec3_t a, vec3_t b, vec3_t c, hit_t *out);
uint8_t intersect_tri(ray_t r, vec3_t a, vec3_t b, vec3_t c, hit_t *out);
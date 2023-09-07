#ifndef PHYSIS_PHYSICS_2D_PARTICLE_HPP
#define PHYSIS_PHYSICS_2D_PARTICLE_HPP

#include "../../core/Vector2.hpp"

class Particle2D
{
    Vector2 position;
    Vector2 velocity;
    Vector2 acceleration;
    Vector2 force_accum;
    float inverse_mass;
    float damping;

    void integrate(float duration);
};

#endif
#include <assert.h>
#include "Particle.hpp"
#include <math.h>

void Particle2D::integrate(float duration)
{
    assert(duration > 0.0);

    this->position += this->velocity.scaled(duration);
    Vector2 result_acc;
    result_acc += this->force_accum.scaled(inverse_mass);
    this->velocity += result_acc.scaled(duration);
    this->velocity.scale(powf(this->damping, duration));
}

#include "Vector2.hpp"

Vector2::Vector2() : x(0), y(0) {}

Vector2::Vector2(const float x, const float y) : x(x), y(y) {}

void Vector2::negate()
{
    this->x = -this->x;
    this->y = -this->y;
}

float Vector2::scalar_product(Vector2& vector) const
{
    return (this->x * vector.x + this->y * vector.y);
}

Vector2 Vector2::operator-() const
{
    return Vector2(-this->x, -this->y);
}

Vector2 Vector2::operator+(Vector2& vector) const
{
    return Vector2(this->x + vector.x, this->y + vector.y);
}

Vector2 Vector2::operator-(Vector2& vector) const
{
    return Vector2(this->x - vector.x, this->y - vector.y);
}

float Vector2::operator*(Vector2& vector) const
{
    return this->scalar_product(vector);
}

void Vector2::operator+=(Vector2& vector)
{
    *(this) = this->operator+(vector);
}

void Vector2::operator-=(Vector2& vector)
{
    *(this) = this->operator-(vector);
}

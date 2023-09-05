#include "Vector.hpp"

Vector3::Vector3() : x(0), y(0), z(0) {}

Vector3::Vector3(const float x, const float y, const float z) : x(x), y(y), z(z) {}

void Vector3::negate()
{
    this->x = -this->x;
    this->y = -this->y;
    this->z = -this->z;
}

Vector3 Vector3::operator-() const
{
    return Vector3(-this->x, -this->y, -this->z);
}

Vector3 Vector3::operator+(Vector3& vector) const
{
    return Vector3(this->x + vector.x, this->y + vector.y, this->z + vector.z);
}

Vector3 Vector3::operator-(Vector3& vector) const
{
    return Vector3(this->x - vector.x, this->y - vector.y, this->z - vector.z);
}

#ifndef PHYSIS_PHYSICS_CORE_VECTOR3_HPP
#define PHYSIS_PHYSICS_CORE_VECTOR3_HPP

class Vector3
{
public:
    float x, y, z;
public:
    Vector3();
    Vector3(const float x, const float y, const float z);

    void negate();
    float scalar_product(Vector3& vector) const;

    Vector3 operator-() const;
    Vector3 operator+(Vector3& vector) const;
    Vector3 operator-(Vector3& vector) const;
    float operator*(Vector3& vector) const;
    void operator+=(Vector3& vector);
    void operator-=(Vector3& vector);
};

#endif

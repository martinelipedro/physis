#ifndef PHYSIS_PHYSICS_CORE_VECTOR2_HPP
#define PHYSIS_PHYSICS_CORE_VECTOR2_HPP

class Vector2
{
public:
    float x, y;
public:
    Vector2();
    Vector2(const float x, const float y);

    void negate();
    Vector2 scaled(float scalar);
    void scale(float scalar);
    float scalar_product(Vector2& vector) const;

    Vector2 operator-() const;
    Vector2 operator+(Vector2& vector) const;
    Vector2 operator-(Vector2& vector) const;
    float operator*(Vector2& vector) const;
    void operator+=(Vector2& vector);
    void operator-=(Vector2& vector);
};

#endif
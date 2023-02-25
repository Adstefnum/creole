#pragma once
class Vector3
{

public:
	float x, y, z;
	Vector3(): x(0),y(0),z(0) {}
    Vector3(int x, int y, int z) : x(x), y(y), z(z) {}
	Vector3(float x, float y, float z): x(x), y(y), z(z) {}

    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(float scalar) const;
    float dot(const Vector3& other) const;
    Vector3 cross(const Vector3& other) const;
    float magnitude() const;
    Vector3 normalized() const;
    Vector3 project(const Vector3& other) const;
    Vector3 calculateAngleBetween(const Vector3& other) const;

};


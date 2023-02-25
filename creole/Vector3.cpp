#include "Vector3.h"
#include <cmath>

Vector3 Vector3::operator+(const Vector3& other) const
{
    return Vector3(x+other.x, y+other.y, z+other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const
{
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(float scalar) const
{
    return Vector3(x * scalar, y * scalar, z * scalar);
}


float Vector3::dot(const Vector3& other) const
{
    return x * other.x + y * other.y + z * other.z;
}

Vector3 Vector3::cross(const Vector3& other) const
{
    return Vector3((y * other.z) - (z * other.y), z * other.x - x * other.z, x * other.y - y * other.x);
}

float Vector3::magnitude() const
{
    return sqrt(x*x + y*y + z*z);
}

Vector3 Vector3::normalized() const
{
    float mag = magnitude();
    return Vector3(x/mag, y/mag, z/mag);
}

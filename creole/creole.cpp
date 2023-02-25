#include <iostream>
#include "Vector3.h"

int main()
{
    std::cout << "Hello World!\n";
}

struct RigidBody {
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    float mass;
};

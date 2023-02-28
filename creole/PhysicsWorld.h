#pragma once
#include "Vector3.h"
#include <vector>

struct PhysicsObject {
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    Vector3 force;
    float mass;
};

class PhysicsWorld {
private:
    std::vector<PhysicsObject*> objects;
    Vector3 gravity = Vector3(0.0f, -9.81f, 0.0f);

public:
    void addPhysicsObject(PhysicsObject* physicsObject);
    void removePhysicsObject(PhysicsObject* physicsObject);
    void updatePhysicsObjects(float dt);

};
#include "PhysicsWorld.h"

void PhysicsWorld::updatePhysicsObjects(float dt)
{
	for (PhysicsObject* object : objects) {
		object->force += gravity * object->mass;
		object->velocity += (object->force / object->mass) * dt;
		object->position += object->velocity * dt;
		object->force = Vector3(0, 0, 0);
	}
}

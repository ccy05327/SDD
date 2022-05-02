#include "physics.h"
// Thing constructor
Thing::Thing(float x, float y, float radius) : x{x}, y{y}, dX{0}, dY{0} {
}
// end of Thing constructor
void Thing::setPosition(float x, float y) {
}
float Thing::getX() {
    return this->x;
}
float Thing::getY() {
    return this->y;
}
void Thing::applyForce(float xForce, float yForce) {
    x += xForce;
    y += yForce;
}
void Thing::update() {
    x += dX;
    y += dY;
}
bool Thing::didCollide(Thing& otherThing) {
    // if (this.getX()-otherThing.getX() > 5 || this.getY()-otherThing.getY())
    return false;
}

/*
• Can you add things to World and does it correctly store them ?
• Does World apply gravitational forces to things correctly ?
• Does World calculate if things have collided and apply basic repulsion forces?
*/

World::World(float width, float height, float gravity) {}

void World::addThing(Thing* thing) {}

bool World::didThingsCollide(Thing* thing1, Thing* thing2) {
    return false;
}

int World::countThings() {
    return 0;
}

void World::update() {}
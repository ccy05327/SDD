#pragma once

class Thing {
   public:
    /** create a thing with the sent properties
     * @param x - the horizontal position
     * @param y - the vertical position
     * @param radius - the radius (we assume it is circular)
     */
    Thing(float x, float y, float radius);
    /**
     * set the position of the thing
     * @param x - the horizontal position
     * @param y - the vertical position
     */
    void setPosition(float x, float y);
    /**
     * Get the horizontal position
     * @return float
     */
    float getX();
    /**
    * Get the vertical position
    @return float
    */
    float getY();
    /**
     * Apply a force of the sent magnitude to the
     * thing
     * @param xForce - horizontal force
     * @param yForce - vertical force
     */
    void applyForce(float xForce, float yForce);
    /** update the position of the thing
     * New position = x + dx, y + dy
     */
    void update();
    /** If the two things are close enough to eachother, it should return true, otherwise false */
    bool didCollide(Thing& otherThing);

   private:
    float x;
    float y;
    float dX;
    float dY;
    float radius;
};

class World {
   public:
    /** Create a world with the sent properties
     * @param width
     * @param height
     * @param gravity
     */
    World(float width, float height, float gravity);
    /**
     * Add a thing to the world.
     * @param thing - a pointer to a thing (pass this in with &aThing)
     */
    void addThing(Thing* thing);
    /**
     * Checks if the two things collided,
     * true if distance < radius1 + radius2
     * @param thing1: a pointer to a thing (&thing)
     * @param thing2: a pointer to another thing (&thing)
     * @return bool
     */
    bool didThingsCollide(Thing* thing1, Thing* thing2);
    /**
     * Returns the number of things in the world
     * @return int
     */
    int countThings();
    /**
     * Update the things in the world, including
     * applying gravitational forces
     * computing collisions
     * and applying edge of world bounces
     */
    void update();

   private:
    float width;
    float height;
    float gravity;
};
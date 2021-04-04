#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp

class StudentWorld;

class Actor : public GraphObject { // Base Class
	
	StudentWorld* m_world;

public:

	Actor(StudentWorld* world, int imageID, int startX, int startY, Direction startDirection, float size, unsigned int depth)
		: GraphObject(imageID, startX, startY, startDirection, size, depth), m_world(world) {}

	virtual void doSomething() = 0;

	virtual void annoy() = 0;

	StudentWorld* getWorld() const {
		return m_world;
	}

};

class Tunnelman : public Actor {

	bool is_alive;
	int hit_pts, water, sonar, nuggets;

public:

	Tunnelman(StudentWorld* world, int imageID = TID_PLAYER, int startX = 30, int startY = 60, Direction startDirection = right, float size = 1.0, unsigned int depth = 0)
		: Actor(world, imageID, startX, startY, startDirection, size, depth), is_alive(true), hit_pts(10), water(5), sonar(1), nuggets(0) {setVisible(true);}

	void canMove(int ch, int dest_x, int dest_y);

	virtual void doSomething();

	virtual void annoy();

	void dec_hit_pts(int dec) {
		hit_pts -= dec;
	}


	void die() {
		is_alive = false;
	}

	void live() {
		is_alive = true;
	}

	bool getIsAlive() const {
		return is_alive;
	}

};

class Earth : public Actor {


public:

	Earth(StudentWorld* world, int startX, int startY, int imageID = TID_EARTH, Direction startDirection = right, float size = .25, unsigned int depth = 3)
		: Actor(world, imageID, startX, startY, startDirection, size, depth) {setVisible(true);}

};


/*class Protestor : public Actor {

};


class HardcoreProtester : public Protestor {

}; 

class Goodie : public GraphObject { // Base Class

};*/







#endif // ACTOR_H_

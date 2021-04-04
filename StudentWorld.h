#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "GameConstants.h"
#include <string>
#include <vector>

class Actor;

// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp

class StudentWorld : public GameWorld
{
public:
	StudentWorld(std::string assetDir);
	virtual ~StudentWorld();


	virtual int init();
	virtual int move();
	virtual void cleanUp();

	bool isValidMove(int dest_x, int dest_y);

private:
	Tunnelman* tunnel_man;
	vector<Actor*> actor;
};

#endif // STUDENTWORLD_H_

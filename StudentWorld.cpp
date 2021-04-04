#include "StudentWorld.h"
#include <string>
using namespace std;

GameWorld* createStudentWorld(string assetDir)
{
	return new StudentWorld(assetDir);
}

// Students:  Add code to this file (if you wish), StudentWorld.h, Actor.h and Actor.cpp

StudentWorld::StudentWorld(string assetDir)
	: GameWorld(assetDir) {}

StudentWorld::~StudentWorld() {
	cleanUp();
}

int StudentWorld::init() {

	return GWSTATUS_CONTINUE_GAME;
}

bool StudentWorld::isValidMove(int dest_x, int dest_y) {
	return true;
}

int StudentWorld::move() {
	// This code is here merely to allow the game to build, run, and terminate after you hit enter a few times.
// Notice that the return value GWSTATUS_PLAYER_DIED will cause our framework to end the current level.
	decLives();
	return GWSTATUS_PLAYER_DIED;
}

void StudentWorld::cleanUp() {

}

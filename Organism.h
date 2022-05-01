#pragma once
#include <iostream>
#include <utility>
#include "World.h"
class World;
using namespace std;

class Organism {
protected:
	int strength;
	int initiative;
	pair<int, int>position;

public:
	Organism(int strength, int initiative, int x, int y);
	Organism getOrganism();
	int getStrength();
	int getInitiative();
	pair<int, int>getPosition();
	~Organism();
};
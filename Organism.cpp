#include "Organism.h"
#include "World.h"

using namespace std;

Organism::Organism(int strength, int initiative, int x, int y)
	: strength(strength), initiative(initiative) {
	this->position.first = x;
	this->position.second = y;
	
	//world->add_el(this->getOrganism());
}

Organism Organism::getOrganism() {
	return *this;
}

int Organism::getInitiative() {
	return this->initiative;
}

int Organism::getStrength() {
	return this->strength;
}

pair<int, int> Organism::getPosition() {
	return this->position;
}

Organism::~Organism() {
	cout << "Destructor bum bum" << endl;
}
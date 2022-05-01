#pragma once
#include <vector>
#include "Organism.h"
#include <iostream>
class Organism;
using namespace std;

class World {
	std::vector<Organism*>a;
public:
	void add_el(Organism *o);
	void printALL();
};
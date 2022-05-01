#include <iostream>
#include "Organism.h"
#include "World.h"

using namespace std;

int main() {
	World X;
	Organism A(5, 4, 3, 2);
	Organism B(4, 7, 1, 5);
	Organism C(3, 8, 9, 4);
	Organism D(2, 9, 5, 8);
	cout << A.getInitiative() << endl;
	cout << A.getStrength() << endl;
	X.add_el(&A);
	X.add_el(&B);
	X.add_el(&C);
	X.add_el(&D);
	X.printALL();
	return 0;
}
#include "level0.h"
#include "level1.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	cout << "Creating a level1." << endl;
	Level1 lvl1 = Level1();
	cout << "Creating a new grid." << endl;
	Square*** grid = lvl1.createGrid();
	cout << "Printing the grid." << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << grid[i][j]->getRepresentation() << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 10; i++) {
		delete[] grid[i];
	}
	delete grid;

	Square* newsq = lvl1.createSquare();
	cout << newsq->getRepresentation() << endl;
	newsq = lvl1.createSquare(1, 1);
	cout << newsq->getRepresentation() << endl;
	newsq = lvl1.createSquare(1, 1);
	cout << newsq->getRepresentation() << endl;
	newsq = lvl1.createSquare(1, 1);
	cout << newsq->getRepresentation() << endl;
	newsq = lvl1.createSquare(1, 1);
	cout << newsq->getRepresentation() << endl;
	newsq = lvl1.createSquare(1, 1);
	cout << newsq->getRepresentation() << endl;

	return 0;
}
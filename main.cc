#include "lateralsquare.h"
#include <iostream>

using namespace std;

int main(){
	Square* t = new LateralSquare();
	cout << t->getRepresentation() << endl;
	return 0;
}
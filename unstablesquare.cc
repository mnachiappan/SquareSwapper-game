#include "unstablesquare.h"
#include <string>
#include <sstream>
using namespace std;

const std::string UnstableSquare::ADVANCED_SYMBOL = "_";
const std::string UnstableSquare::SQUARE_SYMBOL = "b";

std::string UnstableSquare::getRepresentation(){
	stringstream ss;
	ss << ADVANCED_SYMBOL << SQUARE_SYMBOL << colour;
	return ss.str();
}
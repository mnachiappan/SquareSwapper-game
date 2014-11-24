#include "uprightsquare.h"
#include <string>
#include <sstream>
using namespace std;

const std::string UprightSquare::ADVANCED_SYMBOL = "_";
const std::string UprightSquare::SQUARE_SYMBOL = "v";

std::string UprightSquare::getRepresentation(){
	stringstream ss;
	ss << ADVANCED_SYMBOL << SQUARE_SYMBOL << colour;
	return ss.str();
}
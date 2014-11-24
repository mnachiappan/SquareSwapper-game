#include "basicsquare.h"
#include <string>
#include <sstream>
using namespace std;

const std::string BasicSquare::ADVANCED_SYMBOL = "_";
const std::string BasicSquare::SQUARE_SYMBOL = "_";

std::string BasicSquare::getRepresentation(){
	stringstream ss;
	ss << ADVANCED_SYMBOL << SQUARE_SYMBOL << colour;
	return ss.str();
}
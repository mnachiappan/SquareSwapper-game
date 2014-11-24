#include "lateralsquare.h"
#include <string>
#include <sstream>
using namespace std;

const std::string LateralSquare::ADVANCED_SYMBOL = "_";
const std::string LateralSquare::SQUARE_SYMBOL = "h";

std::string LateralSquare::getRepresentation(){
	stringstream ss;
	ss << ADVANCED_SYMBOL << SQUARE_SYMBOL << colour;
	return ss.str();
}
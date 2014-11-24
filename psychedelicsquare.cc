#include "psychedelicsquare.h"
#include <string>
#include <sstream>
using namespace std;

const std::string PsychedelicSquare::ADVANCED_SYMBOL = "_";
const std::string PsychedelicSquare::SQUARE_SYMBOL = "p";

std::string PsychedelicSquare::getRepresentation(){
	stringstream ss;
	ss << ADVANCED_SYMBOL << SQUARE_SYMBOL << colour;
	return ss.str();
}
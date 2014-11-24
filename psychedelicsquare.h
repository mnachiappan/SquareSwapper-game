#ifndef __PSYCHEDELIC_SQUARE_H__
#define __PSYCHEDELIC_SQUARE_H__

#include "square.h"
#include <string>

class PsychedelicSquare : public Square {
private:
	static const std::string ADVANCED_SYMBOL;
	static const std::string SQUARE_SYMBOL;

public:
	std::string getRepresentation();
};

#endif
#ifndef __BASIC_SQUARE_H__
#define __BASIC_SQUARE_H__

#include "square.h"
#include <string>

class BasicSquare : public Square {
private:
	static const std::string ADVANCED_SYMBOL;
	static const std::string SQUARE_SYMBOL;

public:
	std::string getRepresentation();
};

#endif
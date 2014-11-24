#ifndef __UPRIGHT_SQUARE_H__
#define __UPRIGHT_SQUARE_H__

#include "square.h"
#include <string>

class UprightSquare : public Square {
private:
	static const std::string ADVANCED_SYMBOL;
	static const std::string SQUARE_SYMBOL;

public:
	std::string getRepresentation();
};

#endif
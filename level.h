#ifndef __LEVEL_H__
#define __LEVEL_H__

#include "square.h"

class Level {
public:
	//virtual Square createSquare() = 0;
	virtual Square** createGrid() = 0;
};


#endif
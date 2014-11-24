#ifndef __LEVEL0_H__
#define __LEVEL0_H__
#include "level.h"
#include "square.h"
#include <string>

class Level0 : public Level {

private:
	std::string file;
public:
	Square** createGrid();
};
#endif
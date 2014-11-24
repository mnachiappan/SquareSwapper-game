#ifndef __SQUARE_H__
#define __SQUARE_H__

#include <string>

class Square {
	
	protected:
	int colour;
	int row;
	int column;
	//TextDisplay* td;
	static const std::string ADVANCED_SYMBOL;
	static const std::string SQUARE_SYMBOL;

public:
	// virtual executeAbility(Board* board) = 0;
	virtual std::string getRepresentation() = 0;
	void setCoords(const int &row, const int &column);
	int getColour();
	int getRow();
	int getColumn();
	// void setDisplay(TextDisplay* td);
};

#endif
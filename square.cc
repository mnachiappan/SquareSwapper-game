#include "square.h"

void Square::setCoords(const int &row, const int &column){
	this->row = row;
	this->column = column;
}

int Square::getColour(){
	return colour;
}

int Square::getRow(){
	return row;
}

int Square::getColumn(){
	return column;
}

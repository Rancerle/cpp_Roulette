#include "Square.h"

Square::Square()
{
	squareNum = -1;
	squareColor = BLACK;
	row = 0;
	colum = 0;
}

Square::Square(int newNum, Colorstate newColor, int newRow, int newColum)
{
	squareNum = newNum;
	squareColor = newColor;
	row = newRow;
	colum = newColum;
}

int Square::getNumber() const { return squareNum; }
Colorstate Square::getColor() const { return squareColor; }
int Square::getRow() const { return row; }
int Square::getColum() const { return colum; }
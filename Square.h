#pragma once
#include <iostream>
#include "SquareColor.h"

using namespace std;

class Square
{
public:
	Square();
	Square(int, Colorstate, int, int);

	int getNumber() const;
	Colorstate getColor() const;
	int getRow() const;
	int getColum() const;

private:
	int squareNum;
	Colorstate squareColor;
	int row;
	int colum;
};


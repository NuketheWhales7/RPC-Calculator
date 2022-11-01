//Christopher Miller
//CIS2542 - Advanced C++ Programming - Homework 13


#include "Operands.h"

Operand::~Operand() //Defined to help prevent memory leaks.
{
	//Nothing Here...
}

Number::Number(double v) //Set up to prevent link errors
	: value(v)
{
	//Nothing Here...
}

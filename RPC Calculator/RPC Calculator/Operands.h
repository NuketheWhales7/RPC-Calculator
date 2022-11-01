//This is the Operands Header where you can find all functions and Operands.
//Christopher Miller
//CIS2542 - Advanced C++ Programming - Homework 13

#pragma once


class Operand
{
public:
	virtual ~Operand();
};


class Number : public Operand
{
public:
	Number(double v); //Constructor that returns a float value
	double value; //Variable float value
};

class Operator : public Operand
{
	//Nothing Here..
};

class Add : public Operand //This function is used for adding
{
	//Nothing Here..
};

class Subtract : public Operand //This function is used for subtracting
{
	//Nothing Here..
};

class Multiply : public Operand //This function is used for multipying
{
	//Nothing Here..
};

class Divide : public Operand //This function is used for dividing
{
	//Nothing Here..
};
 
class Square : public Operand //This function is used for squaring
{
	//Nothing Here..
};
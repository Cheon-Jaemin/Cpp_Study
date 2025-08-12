#include <iostream>
#include "card.h"
using namespace std;

Card::Card()
{
	number = 0;
	strcpy(shape, "no shape");
}

Card::Card(const char* shape, int number)
{
	strcpy(this->shape, shape);
	this->number = number;
}

void Card::printCard() 
{
	cout << shape << ", " << number << endl;
}

void Card::setShape(const char* shape)
{
	strcpy(this->shape, shape);
}

void Card::setNumber(int number)
{
	this->number = number;
}

char* Card::getShape()
{
	return shape;
}

int Card::getNumber()
{
	return number;
}
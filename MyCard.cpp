#include<iostream>
#include "MyCard.h"

using namespace std;

MyCard::MyCard(int number, const char* shape) 
{
	this->number = number;
	strcpy(this->shape, shape);
}

MyCard::MyCard() 
{
	number = 0;
	strcpy(shape, "no shape");
}

MyCard::~MyCard() 
{

}


int MyCard::getNumber() const
{
	return number;
}

const char* MyCard::getShape() const
{
	return shape;
}

void MyCard::setNumber(int number) 
{
	this->number = number;
}

void MyCard::setShape(const char* shape) 
{
	strcpy(this->shape, shape);
}

void MyCard::showCardInfo() const
{
	cout << number << ", " << shape << endl;
}

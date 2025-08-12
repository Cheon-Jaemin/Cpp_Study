#pragma once

class Card {
private:
	char shape[30];
	int number;

public:
	Card();
	Card(const char* shape, int number);
	
	void printCard();
	void setShape(const char* shape);
	void setNumber(int number);
	char* getShape();
	int getNumber();
};
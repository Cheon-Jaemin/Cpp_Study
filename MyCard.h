#pragma once
class MyCard {

private:
	char shape[30];
	int number;

public:
	MyCard(int num, const char* str);
	MyCard();
	~MyCard();

public:
	const char* getShape() const;
	int getNumber() const;
	void setShape(const char*);
	void setNumber(int);
	void showCardInfo()const;

};

#include <stdio.h>
#include <iostream>
using namespace std;

class Card
{
private:
	char Shape[30];
	int number;

public:
	void printCard()
	{
		cout << Shape << ", " << number << endl;
	}

	void setShape(const char* str)
	{
		strcpy(Shape, str);
	}

	char* getShape()
	{
		return Shape;
	}

	void setNumber(int num)
	{
		number = num;
	}

	int getNumber()
	{
		number;
		return number;
	}
};

void testCard()
{
	Card card;
	card.setShape("heart");
	card.setNumber(7);

	cout << "카드모양 : " << card.getShape() << "\n카드숫자 : " << card.getNumber() << endl;
}

void main(void)
{
	Card c1;
	c1.setShape("diamond");
	c1.setNumber(7);
	c1.printCard();

	Card c2;
	c2.setShape("heart");
	c2.setNumber(3);
	c2.printCard();

	Card c3;
	c3.setShape("clover");
	c3.setNumber(11);
	c3.printCard();
	cout << endl;

	testCard();
	return;
}

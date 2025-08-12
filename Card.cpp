#include <iostream>
using namespace std;

class Card {
private:
	char* shape;
	int number;

public:
	Card()
	{
		number = 0;
		int len = strlen("no shape");
		shape = new char[len + 1];
		strcpy(shape, "no shape");
	}

	Card(const char* shape, int number)
	{
		int len = strlen(shape);
		this->shape = new char[len + 1];
		strcpy(this->shape, shape);
		this->number = number;
	}

	~Card()
	{
		delete[] shape;
	}

	void printCard() const
	{
		cout << shape << ", " << number << endl;
	}

	void setShape(const char* shape) 
	{
		strcpy(this->shape, shape);
	}

	void setNumber(int number) 
	{
		this->number = number;
	}

	char* getShape()
	{
		return shape;
	}

	int getNumber()
	{
		return number;
	}
};

void testCard() 
{
	Card card;
	card.setShape("heart");
	card.setNumber(7);

	cout << "카드모양:" << card.getShape()<< "  카드숫자:" << card.getNumber() << endl;
}

int main() 
{
	testCard();
}
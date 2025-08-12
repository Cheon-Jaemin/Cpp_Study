//�������а� ��������
#include <iostream>
using namespace std;

class MyCar {
private:
	int dorNum;
	char color[30];

public:
	MyCar(int dorNum, const char* color)
	{
		this->dorNum = dorNum;
		strcpy(this->color, color);
	}

	MyCar()
	{
		dorNum = 2;
		strcpy(color, "silver");
	}

	int getDorNum() 
	{
		return dorNum;
	}

	char* getColor() 
	{
		return color;
	}

	void setColor(const char* color) 
	{
		strcpy(this->color, color);
	}

	void setDorNum(int dorNum)
	{
		this->dorNum = dorNum;
	}

	void showCarInfo() 
	{
		cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color << endl;
	}

};

void testMyCar() 
{
	MyCar c;
	c.setDorNum(4);
	c.setColor("red");

	int dor = c.getDorNum();
	char* p = c.getColor();
	cout << p << endl;

	c.showCarInfo();
}


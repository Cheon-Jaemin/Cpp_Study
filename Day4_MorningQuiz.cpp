#include <stdio.h>
#include <iostream>
using namespace std;

class Person
{
	char* name;
	int age;

public:
	Person(const char* name, int age)
	{
		int len = strlen(name);
		this->name = new char[len];
		strcpy(this->name, name);
		this->age = age;
	}
};

int Adder(int a, int b = 2)
{
	return a + b;
}

class MyCar
{
	int dorNum;
	char color[30];

public:
	MyCar()
	{
		dorNum = 4;
		strcpy(color, "white");
	}

	MyCar(int dorNum, const char* str)
	{
		this->dorNum = dorNum;
		strcpy(color, str);
	}

	void showCarInfo()
	{
		cout << "문 개수 : " << dorNum << ", 자동차 색깔 : " << color << endl;
	}
};

void test()
{
	MyCar c1(3, "red");
	MyCar c2;

	c1.showCarInfo();
	c2.showCarInfo();
}

void main(void)
{
	test();
	return;
}


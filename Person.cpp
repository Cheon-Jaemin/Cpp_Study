#include <stdio.h>
#include <iostream>
using namespace std;

class Person
{
	char* name;
	int age;

public:
	Person()
	{
		age = 0;
		int len = strlen("no name");
		name = new char[len + 1];
		strcpy(name, "no name");
	}

	Person(const char* myname, int myage)
	{
		age = myage;
		int len = strlen(myname);
		name = new char[len + 1];
		strcpy(name, myname);
	}

	void ShowPersonInfo()
	{
		cout << name << ", " << age << endl;
	}

	~Person()
	{
		delete[] name;
	}
};

void main(void)
{
	Person* my = new Person();
	my->ShowPersonInfo();

	Person* my1 = new Person("ÃµÀç¹Î", 25);
	my1->ShowPersonInfo();
}
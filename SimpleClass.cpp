#include <stdio.h>
#include <iostream>
using namespace std;

class SimpleClass
{
	int num1;
	int num2;

public:
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

void main(void)
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();

	/*SimpleClass sc4();
	sc4.ShowData();*/

	SimpleClass *p1 = new SimpleClass;
	p1->ShowData();

	SimpleClass* p2 = new SimpleClass();
	p2->ShowData();
	
	return;
}

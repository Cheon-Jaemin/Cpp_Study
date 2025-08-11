#include <stdio.h>
#include <iostream>

using namespace std;

void func1()
{
	int n1 = 1020;
	int& n2 = n1;

	n2 = 3047;
	cout << "VAL : " << n1 << endl;
	cout << "REF : " << n2 << endl;

	cout << "VAL : " << &n1 << endl;
	cout << "REF : " << &n2 << endl;
}

void SwapByRef(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

void quest1()
{
	double d = 3.1;
	double& ref = d;

	cout << "d : " << d << " ref : " << ref << endl;
	cout << "d : " << &d << " ref : " << &ref << endl;
}

void quest2()
{
	char ch1 = 'A';
	char& ref1 = ch1;
	char& ref2 = ch1;

	cout << ch1 << endl;
	cout << ref1 << endl;

	ref2++;

	cout << ch1 << endl;
	cout << ref1 << endl;
}

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void test_swapByRef()
{
	int val1 = 10;
	int val2 = 20;
	SwapByRef2(val1, val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
}

void quest4(int &ref)
{
	ref++;
	cout << "ref : " << ref << endl;
}

void quest5(int& ref)
{
	ref = -ref;
	cout << "ref : " << ref << endl;
}

void quest6()
{
	const int num = 12;
	const int* p = &num;
	const int*& ref = p;

	cout << *p << endl;
	cout << *ref << endl;
	
	cout << p << endl;
	cout << ref << endl;
}

char* quest7(int length)
{
	char* arr = new char[length + 1];
	return arr;
}

void test_quest7()
{
	char* str = quest7(7);

	cin >> str;

	cout << "입력한 문자열 : " << str;

	delete[] str;
}


typedef struct Point
{
	int xpos;
	int ypos;
};

Point& pntAdder(const Point& p1, const Point& p2)
{
	Point* newPoint = new Point();
	newPoint->xpos = p1.xpos + p2.xpos;
	newPoint->ypos = p1.ypos + p2.ypos;
	return *newPoint;
}

void quest8()
{
	Point* p1 = new Point();
	p1->xpos = 5;
	p1->ypos = 10;
	Point* p2 = new Point();
	p2->xpos = 10;
	p2->ypos = 10;

	Point& ref = pntAdder(*p1, *p2);
	cout << "ref.xpos = " << ref.xpos << "\n" << "ref.ypos = " << ref.ypos << endl;

	delete p1;
	delete p2;
	delete& ref;
}

void main(void)
{
	test_quest7();
	return;
}




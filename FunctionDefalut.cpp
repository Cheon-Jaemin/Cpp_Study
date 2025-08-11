#include <stdio.h>
#include <iostream>
using namespace std;

int BoxVolume(int length, int width = 1, int height = 1)
{
	return length * width * height;
}

void Box()
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	//cout << "[D, D, D] : " << BoxVolume() << endl;	
	//에러 : 매개변수로 단 하나는 존재해야함
}

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc() 
{
	return 10;
}

inline int SQUARE(int x)
{
	return x * x;
}

void main(void)
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(1.2) << endl;
	return;
}
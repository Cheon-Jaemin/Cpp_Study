#include <stdio.h>
#include <iostream>
using namespace std;
template <typename T>

class Point
{
public :
	T x;
	T y;

	Point(T x, T y)
	{
		this->x = x;
		this->y = y;
	}

	void show()
	{
		cout << x << ", " << y << endl;
	}
};

void main(void)
{
	Point <int> p1(1, 2);
	p1.show();

	Point <double> p2(1.2, 2.2);
	p2.show();

	Point <char> p3('a', 'b');
	p3.show();
	
	return;
}

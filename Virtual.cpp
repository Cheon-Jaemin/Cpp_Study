#include <stdio.h>
#include <iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	virtual void show()
	{
		cout << x << ", " << y << endl;
	}
};

class Point3D : Point
{
	int z;

public:
	Point3D(int x, int y, int z) : Point(x, y)
	{
		this->z = z;
	}

	virtual void show()
	{
		cout << x << ", " << y << ", " << z << endl;
	}
};

void main(void)
{
	Point* p = new Point(3, 5);
	p->show();

	Point3D* p2 = new Point3D(1, 2, 3);
	p2->show();

	Point* p3 = (Point*)p2;
	p3->show();
}

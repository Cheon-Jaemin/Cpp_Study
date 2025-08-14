#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T>

class Data
{
	T data;

public:
	Data(T d)
	{
		data = d;
	}

	T GetData()
	{
		return data;
	}
};

void main(void)
{
	Data<int> d1(10);
	cout << d1.GetData() << endl;

	Data<double> d2(3.14);
	cout << d2.GetData() << endl;

	Data<char> d3('a');
	cout << d3.GetData() << endl;
	
	return;
}
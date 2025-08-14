#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T>

T GetMax(T a, T b)
{
	return (a > b) ? a : b;
}

void main(void)
{
	cout << GetMax(1, 3) << endl;
	cout << GetMax(1.1, 3.3) << endl;

	return;
}

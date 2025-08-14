#include <vector>
#include <iostream>
using namespace std;

void func1()
{
	vector<int> vc;

	for (int i = 0; i < 10; i++)
	{
		vc.push_back(i + 1);
	}

	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << ", ";
	}
}

void main(void)
{
	func1();
	return;
}

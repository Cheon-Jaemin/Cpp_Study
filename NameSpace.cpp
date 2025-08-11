#include <stdio.h>
#include <iostream>

using namespace std;

namespace NameSpace1
{
	void function()
	{
		cout << "NameSpace1ÀÇfunction" << endl;
	}
}

namespace NameSpace2
{
	void function()
	{
		cout << "NameSpace2ÀÇfunction" << endl;
	}
}

void main(void)
{
	NameSpace1::function();
	NameSpace2::function();
	return;
}
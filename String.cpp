#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void func1()
{
	string str1 = "Hello";
	string str2 = " World";
	string result = str1 + str2;
	cout << result << endl;
	
	str1 += str2;
	cout << str1 << endl;
}

void func2()
{
	string str = "Hello";
	cout << str.length() << endl;
	cout << str.size() << endl;
}

void func3()
{
	string str = "Hello";
	cout << str[0] << endl;
	cout << str.at(1) << endl;
}

void func4()
{
	string str = "Hello, World!";
	string sub = str.substr(7, 5);
	cout << sub << endl;
}

void func5()
{
	string str1 = "apple";
	string str2 = "banana";
	string str3 = "apple";

	if (str1 < str2)
	{
		cout << "apple�� banana���� �տ� ����" << endl;
	}

	if (str1.compare(str2) < 0)
	{
		cout << "apple�� banana���� �տ� ����" << endl;
	}

	if (str1.compare(str3) == 0)
	{
		cout << str1 << " �� " << str3 << " ��(��) ������ ����" << endl;
	}
}

void func6()
{
	string str = "Hello";
	str.insert(5, ", World");
	cout << str << endl;

	str.erase(5, 7);
	cout << str << endl;
}

void func7()
{
	string str = "Hello, Hello!";
	int pos = str.find("Hello");
	cout << pos << endl;
}

void main(void)
{
	func7();
	return;
}
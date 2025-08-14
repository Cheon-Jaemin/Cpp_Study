#include <stdio.h>
#include <iostream>
using namespace std;

void func1()
{
	int a, b;
	cout << "두 개의 정수 입력 : ";
	cin >> a >> b;

	try
	{
		if (b == 0)
		{
			throw b;
		}

		cout << "a/b의 몫 : " << a / b << endl;
		cout << "a/b의 나머지 : " << a % b << endl;
	}
	catch (int exception)
	{
		cout << b << "(으)로 나눌 수 없습니다";
	}
}

void main(void)
{
	func1();
	return;
}

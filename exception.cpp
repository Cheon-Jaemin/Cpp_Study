#include <stdio.h>
#include <iostream>
using namespace std;

void func1()
{
	int a, b;
	cout << "�� ���� ���� �Է� : ";
	cin >> a >> b;

	try
	{
		if (b == 0)
		{
			throw b;
		}

		cout << "a/b�� �� : " << a / b << endl;
		cout << "a/b�� ������ : " << a % b << endl;
	}
	catch (int exception)
	{
		cout << b << "(��)�� ���� �� �����ϴ�";
	}
}

void main(void)
{
	func1();
	return;
}

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrNew(int len)
{
	char* str = new char[len];
	return str;
}

void func1()
{
	char* str = MakeStrNew(20);
	strcpy(str, "hello CPP~");
	cout << str << endl;
	delete[]str;
}

void func2()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << " ";
	}
	delete[]arr;
}

void func3()
{
	char* arr = new char[32];
	cout << "�̸��� �Է��ϼ���.";
	cin >> arr;

	cout << "\n�̸� : " << arr << endl;
}

void func4()
{
	typedef struct User
	{
		char* Name = new char[30];
		int* age = new int;
		char* phone = new char[100];
	};

	User* user = new User;
	cout << "�̸��� �Է��ϼ���";
	cin >> user->Name;

	cout << "��ȭ��ȣ�� �Է��ϼ���.";
	cin >> user->phone;

	cout << "���̸� �Է��ϼ���";
	cin >> *(user->age);

	cout << "\n���������\n" << user->Name << "\n" << user->phone << "\n" << *(user->age) << endl;

	delete user;
}
void main(void)
{
	func4();
	return;
}

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
	cout << "이름을 입력하세요.";
	cin >> arr;

	cout << "\n이름 : " << arr << endl;
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
	cout << "이름을 입력하세요";
	cin >> user->Name;

	cout << "전화번호를 입력하세요.";
	cin >> user->phone;

	cout << "나이를 입력하세요";
	cin >> *(user->age);

	cout << "\n사용자정보\n" << user->Name << "\n" << user->phone << "\n" << *(user->age) << endl;

	delete user;
}
void main(void)
{
	func4();
	return;
}

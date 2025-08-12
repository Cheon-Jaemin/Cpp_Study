#include <stdio.h>
#include <iostream>

using namespace std;

void func1()
{
	char* str = new char[31];
	cin >> str;
	cout << str;
	delete[] str;
}

int BoxVolume(int num1 = 1, int num2 = 1, int num3 = 1)
{
	return num1 * num2 * num3;
}

void func2()
{
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << num1 << endl;
	cout << num2 << endl;
}

int& IncreaseOne(int& n)
{
	n++;
	return n;
}

void func3()
{
	int num1 = 1;
	int& num2 = IncreaseOne(num1);
	num1++;
	cout << num2 << endl;
}

class Addr
{
public:
	char name[32];
	char phone[32];
	int addr_id;

	void showAddrInfo()
	{
		cout << name << ", " << phone << ", " << addr_id << endl;
	}
};

void main(void)
{
	/*cout << "[3, 3, 3] : "<< BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	cout << "[D, D, D] : " << BoxVolume() << endl;*/

	Addr a1;
	strcpy(a1.name, "ÃµÀç¹Î");
	strcpy(a1.phone, "010-5531-3416");
	a1.addr_id = 1;
	a1.showAddrInfo();

	return;
}

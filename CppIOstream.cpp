#include <iostream>
using namespace std;

void func1()
{
	int val1, val2;
	int result = 0;
	cout << "�� ���� ���� �Է� : ";
	cin >> val1 >> val2;

	if (val1 > val2)
	{
		for (int i = val2 + 1; i < val1; i++)
		{
			result = (result + i);
		}
	}
	else
	{
		for (int i = val1 + 1; i < val2; i++)
		{
			result = (result + i);
		}
	}

	cout << "�� �� ������ ���� �� : " << result << endl;
}

void func2()
{
	char name[30];
	char phone[100];

	cout << "�̸� �Է� : ";
	cin >> name;

	cout << "��ȭ��ȣ �Է� : ";
	cin >> phone;

	cout << "\n�������\n" << endl;

	cout << "�̸� : " << name << "\n��ȭ��ȣ : " << phone << endl;
}

void func3()
{
	int a, b;
	int result = 0;

	cout << "ù ��° ���� �Է� : ";
	cin >> a;

	cout << "�� ��° ���� �Է� : ";
	cin >> b;

	result = a + b;
	cout << "\n������\n" << a << " + " << b << " = " << result << endl;
}

void func4()
{
	int a;
	cout << "������ �� �Է� : ";
	
	while (true)
	{
		cin >> a;
		if (cin.fail()) 
		{
			break;
		}
		if (a >= 2 && a <= 9)
		{
			for (int i = 1; i <= 9; i++)
			{
				cout << a << " * " << i << " = " << a * i << endl;
			}
			break;
		}
		else
		{
			cout << "2����9������ ���� ���˴ϴ�.";
			continue;

		}
	}
}

bool isPositive(int num)
{
	if (num > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void func5()
{
	int val;
	cout << "���� �ϳ��� �Է��ϼ���.";
	cin >> val;

	if (isPositive(val))
	{
		cout << "positive" << endl;
	}
	else
	{
		cout << "negative" << endl;
	}
}

bool adult(int age)
{
	if (age >= 19)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void func6()
{
	int age;

	cout << "���̸� �Է��ϼ���.";
	cin >> age;

	if (adult(age))
	{
		cout << "�����Դϴ�." << endl;
	}
	else
	{
		cout << "�̼������Դϴ�." << endl;
	}
}

void main(void)
{
	func4();
	return;
}

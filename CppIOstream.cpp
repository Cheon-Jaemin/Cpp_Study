#include <iostream>
using namespace std;

void func1()
{
	int val1, val2;
	int result = 0;
	cout << "두 개의 숫자 입력 : ";
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

	cout << "두 수 사이의 정수 합 : " << result << endl;
}

void func2()
{
	char name[30];
	char phone[100];

	cout << "이름 입력 : ";
	cin >> name;

	cout << "전화번호 입력 : ";
	cin >> phone;

	cout << "\n정보출력\n" << endl;

	cout << "이름 : " << name << "\n전화번호 : " << phone << endl;
}

void func3()
{
	int a, b;
	int result = 0;

	cout << "첫 번째 숫자 입력 : ";
	cin >> a;

	cout << "두 번째 숫자 입력 : ";
	cin >> b;

	result = a + b;
	cout << "\n연산결과\n" << a << " + " << b << " = " << result << endl;
}

void func4()
{
	int a;
	cout << "구구단 단 입력 : ";
	
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
			cout << "2부터9사이의 값만 허용됩니다.";
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
	cout << "정수 하나를 입력하세요.";
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

	cout << "나이를 입력하세요.";
	cin >> age;

	if (adult(age))
	{
		cout << "성인입니다." << endl;
	}
	else
	{
		cout << "미성년자입니다." << endl;
	}
}

void main(void)
{
	func4();
	return;
}

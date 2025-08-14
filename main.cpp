#include <stdio.h>
#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

vector<Student> allStudent;
vector<Student>::iterator it;

void inputData() 
{
	Student s;
	s.inputData();
	allStudent.push_back(s);
}

void printData()
{
	for (it = allStudent.begin(); it != allStudent.end(); it++)
	{
		it->printData();
	}
}

void program()
{
	char flag;

	while (true)
	{
		cout << "1. ������ �Է�" << endl;
		cout << "2. �Է��� ��� ���� ���" << endl;
		cout << "3. �̸����� �˻��ϱ�" << endl;
		cout << "4. ��ȭ��ȣ�� �˻��ϱ�" << endl;
		cout << "5. �̸� �Է� �޾� ��հ� ���� ���" << endl;
		cout << "6. ��� ������ ���� ������ �̸��� ���" << endl;
		cout << "���Ḧ ���Ͻø� q �Ǵ� Q�� ��������" << endl;
		cin >> flag;

		switch (flag)
		{
			case '1':
			{
				inputData();
				break;
			}
			case '2':
			{
				printData();
				break;
			}
			case 'q':
			{
				return;
			}
			case 'Q':
			{
				return;
			}
		}
	}
}

int main(void)
{
	program();
	return 0;
}
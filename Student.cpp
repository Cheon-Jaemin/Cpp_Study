#include <stdio.h>
#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

Student::Student()
{
}

void Student::inputData()
{
	cout << "�̸��� �Է��ϼ���.";
	cin >> name;
	cout << "�޴�����ȣ�� �Է��ϼ���.";
	cin >> phone;
	cout << "���������� �Է��ϼ���.";
	cin >> english;
	cout << "���������� �Է��ϼ���.";
	cin >> korean;
	cout << "���������� �Է��ϼ���.";
	cin >> math;
	cout << "���������� �Է��ϼ���.";
	cin >> science;
	cout << "�޴��� �����ϼ���." << endl;
}

void Student::printData()
{
	cout << "�̸� : " << name << endl;
	cout << "��ȭ��ȣ : " << phone << endl;
	cout << "���� : " << english << endl;
	cout << "���� : " << korean << endl;
	cout << "���� : " << math << endl;
	cout << "���� : " << science << endl;
}

int Student::totalPoint()
{
	return english + korean + math + science;
}

double Student::averagePoint()
{
	return (totalPoint() / 4);
}


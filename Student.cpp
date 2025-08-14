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
	cout << "이름을 입력하세요.";
	cin >> name;
	cout << "휴대폰번호를 입력하세요.";
	cin >> phone;
	cout << "영어점수를 입력하세요.";
	cin >> english;
	cout << "국어점수를 입력하세요.";
	cin >> korean;
	cout << "수학점수를 입력하세요.";
	cin >> math;
	cout << "과학점수를 입력하세요.";
	cin >> science;
	cout << "메뉴를 선택하세요." << endl;
}

void Student::printData()
{
	cout << "이름 : " << name << endl;
	cout << "전화번호 : " << phone << endl;
	cout << "영어 : " << english << endl;
	cout << "국어 : " << korean << endl;
	cout << "수학 : " << math << endl;
	cout << "과학 : " << science << endl;
}

int Student::totalPoint()
{
	return english + korean + math + science;
}

double Student::averagePoint()
{
	return (totalPoint() / 4);
}


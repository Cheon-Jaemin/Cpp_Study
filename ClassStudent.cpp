#include <stdio.h>
#include <iostream>
using namespace std;

class Student
{
private:
	char name[30];
	int ban;
	int no;
	int kor;
	int eng;
	int math;

public:
	void InsertStudentInfo()
	{
		cin >> name >> kor >> eng >> math;
	}

	int getTotal()
	{
		int Total = kor + eng + math;
		return Total;
	}

	float getAverage()
	{
		float Average = (getTotal() / 3);
		return Average;
	}
};

void func1()
{
	//���̰� 5�� �迭�� �л� ��ü ���� ����ڷκ��� �Է¹޾� ��ü ���
	Student arr[5];
	float AllAverage;
	float StudentAverageSum = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° �л��� ���� (�̸�, ��, ��, �� �������)" << endl;
		arr[i].InsertStudentInfo();

		StudentAverageSum += arr[i].getAverage();
	}

	AllAverage = StudentAverageSum / 5;

	cout << "��ü ��� : " << AllAverage << endl;
}

void main(void)
{
	//Student s1;
	//strcpy(s1.name, "ö��");
	//s1.kor = 80;
	//s1.eng = 80;
	//s1.math = 80;
	//cout << s1.name << " : " << "���� - " << s1.getTotal() << "��, " << "��� - " << s1.getAverage() << "��" << endl;

	//Student s2;
	//strcpy(s2.name, "����");
	//s2.kor = 90;
	//s2.eng = 90;
	//s2.math = 90;
	//cout << s2.name << " : " << "���� - " << s2.getTotal() << "��, " << "��� - " << s2.getAverage() << "��" << endl;
	//cout << endl;
	
	func1();
	return;
}
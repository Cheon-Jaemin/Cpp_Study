#include <stdio.h>
#include <iostream>
using namespace std;

class Student
{
protected : 
	string name;
	int id;

public:
	Student(string name, int id)
	{
		this->name = name;
		this->id = id;
	}

	virtual void show_info() = 0;
};

class Student_Java : Student
{
public:
	Student_Java(string name, int id) : Student(name, id)
	{
	}

	void show_info()
	{
		cout << name << ", " << id << " : �ڹٱ�� ����" << endl;
	}
};

class Student_C : Student
{
public:
	Student_C(string name, int id) : Student(name, id)
	{
	}

	void show_info()
	{
		cout << name << ", " << id << " : C/C++ ����" << endl;
	}
};

void main(void)
{
	Student* p1 = (Student*) new Student_C("õ���", 1);
	p1->show_info();

	Student* p2 = (Student*) new Student_Java("�����", 2);
	p2->show_info();
}
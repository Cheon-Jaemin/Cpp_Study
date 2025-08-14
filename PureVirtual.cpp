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
		cout << name << ", " << id << " : 자바기반 수업" << endl;
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
		cout << name << ", " << id << " : C/C++ 수업" << endl;
	}
};

void main(void)
{
	Student* p1 = (Student*) new Student_C("천재민", 1);
	p1->show_info();

	Student* p2 = (Student*) new Student_Java("김미진", 2);
	p2->show_info();
}
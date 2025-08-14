#include <stdio.h>
#include <iostream>
using namespace std;

class Member
{
	string gender;
	string name;
	string phone;

public :
	Member(string gender, string name, string phone)
	{
		this->gender = gender;
		this->name = name;
		this->phone = phone;
	}

	string GetInfoStr()
	{
		string user = gender + ", " + name + ", " + phone;
		return user;
	}
};

class Student : public Member
{
	string major;

public:
	Student(string gender, string name, string phone, string major) : Member(gender, name, phone)
	{
		this->major = major;
	}

	string GetInfoStr()
	{
		string student = Member::GetInfoStr() + ", " + major;
		return student;
	}
};

class Professor : public Member
{
	string subject;
	int career;

public:
	Professor(string gender, string name, string phone, string subject, int career) : Member(gender, name, phone)
	{
		this->subject = subject;
		this->career = career;
	}

	string GetInfoStr()
	{
		char temp[30];
		string professor = Member::GetInfoStr() + ", " + subject + ", " + itoa(career, temp, 10);
		return professor;
	}
};

class Staff : public Member
{
	string position;
	string job;

public:
	Staff(string gender, string name, string phone, string position, string job) : Member(gender, name, phone)
	{
		this->position = position;
		this->job = job;
	}

	string GetInfoStr()
	{
		string staff = Member::GetInfoStr() + ", " + position + ", " + job;
		return staff;
	}
};

void main(void)
{
	Member m1("m", "재민", "010-44-44");
	cout << m1.GetInfoStr() << endl;

	Student m2("f", "미진", "010-44-444", "C++");
	cout << m2.GetInfoStr() << endl;

	Professor m3("f", "이지연", "010-1231-231", "C++", 40);
	cout << m3.GetInfoStr() << endl;

	Staff m4("f", "이서연", "0102-31-234", "과장", "관리");
	cout << m4.GetInfoStr() << endl;
}

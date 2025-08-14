#include <stdio.h>
#include <iostream>
using namespace std;

class Member
{
	char name[30];
	char phone[30];
	int MontlyFee;
	int id;

public :
	Member(const char* name, const char* phone, int id)
	{
		strcpy(this->name, name);
		strcpy(this->phone, phone);
		this->id = id;
	}

	void setFee(int Fee)
	{
		MontlyFee = Fee;
	}

	void showMemberShip()
	{
		cout << "�̸� : " << name << endl;
		cout << "����ó : " << phone << endl;
		cout << "�� ȸ�� : " << MontlyFee << endl;
		cout << "ID : " << id << endl;
	}
};

class GolfMember : public Member
{
	char golfId[30];

public :
	GolfMember(const char* name, const char* phone, int id) : Member(name, phone, id)
	{
		char temp[30];
		itoa(id, temp, 10);
		strcpy(this->golfId, "golf_");
		strcat(golfId, temp);
	}

	void showMemberShip()
	{
		Member::showMemberShip();
		cout << "golfID : " << golfId << endl;
	}

	void golf()
	{
		cout << "������ �մϴ�." << endl;
	}
};

class SwimMember : public Member
{
	char swimId[30];

public:
	SwimMember(const char* name, const char* phone, int id) : Member(name, phone, id)
	{
		char temp[30];
		itoa(id, temp, 10);
		strcpy(this->swimId, "swim_");
		strcat(swimId, temp);
	}

	void showMemberShip()
	{
		Member::showMemberShip();
		cout << "swimID : " << swimId << endl;
	}

	void swim()
	{
		cout << "������ �մϴ�." << endl;
	}
};

void main(void)
{
	Member m1("õ���", "010-5531-3416", 1);
	m1.setFee(1500);
	m1.showMemberShip();

	GolfMember m2("Ȳ�庸", "010-1234-5678", 2);
	m2.setFee(1400);
	m2.showMemberShip();
	m2.golf();

	SwimMember m3("������", "010-4567-8940", 3);
	m3.setFee(2000);
	m3.showMemberShip();
	m3.swim();

	Member m4("ȫ�浿", "010-0101-0101", 4);
	m4.setFee(0);
	m4.showMemberShip();
}
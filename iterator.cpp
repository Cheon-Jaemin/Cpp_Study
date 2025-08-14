#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


void func1()
{
	vector<int> v1;
	vector<int> v2(5);
	vector<int> v3(5, 2);
	vector<int> v4(v3);

	size_t size = v1.size();
	cout << size << endl;

	size = v2.size();
	cout << size << endl;

	vector<double> vd1;
	vector<double> vd2(10, 0.1);

}

void func2()
{
	vector<int> vc;

	for (int i = 0; i < 10; i++)
	{
		vc.push_back(i + 1);
	}

	vector<int>::iterator itr;
	itr = vc.begin();

	while (itr != vc.end())
	{
		cout << *itr << " ";
		++itr;
	}
}

void func3()
{
	vector<int> vc;

	int size = vc.size();
	cout << "���� ũ�� : " << size << endl;

	for (int i = 0; i < 10; i++)
	{
		vc.push_back(i + 1);
	}
	size = vc.size();
	cout << "���� ũ�� : (10���� ���� �߰� ��) " << size << endl;

	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc.at(i) << ", ";
	}
	cout << endl;

	vc.pop_back();
	size = vc.size();
	cout << "���� ũ�� : (pop_back ��) " << size << endl;

	vc.clear();
	size = vc.size();
	cout << "���� ũ�� : (clear ��) " << size << endl;
}

void func4()
{
	string name;
	string search;
	vector<string> v;
	vector<string>::iterator it;

	for (int i = 0; i < 5; i++)
	{
		cout << "�̸� : ";
		cin >> name;
		v.push_back(name);
	}
	cout << endl;

	cout << "\n �Է��� �����͸� ����մϴ�." << endl;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}

void main(void)
{
	func4();
	return;
}



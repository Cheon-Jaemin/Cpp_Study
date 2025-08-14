#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func1()
{
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('c');
	vec.push_back('d');
	vec.push_back('a');

	vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it<<" ";
	}

	sort(vec.begin(), vec.end());

	cout << "\nvector ���� ��\n";
	for (it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it<<" ";
	}
}

void func2()
{
	char arr[5] = { 'd', 'c', 'b', 'a', 'e' };

	sort(arr, arr + 5);

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
}

void func3()
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

	cout << "\n ������ �̸��� �����ϼ���." << endl;
	cin >> search;
	
	it = find(v.begin(), v.end(), search);
	it = v.erase(it);

	cout << "\n���� �� ���Ϳ� ���� ������" << endl;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}
void main(void)
{
	func3();
	return;
}


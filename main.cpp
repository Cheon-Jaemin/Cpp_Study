#include <iostream>
#include "card.h"
using namespace std;

void main(void)
{
	Card c;
	char str[30];

	while (true)
	{
		int i;
		cout << "1. ī�� ��� �Է�" << endl;
		cout << "2. ī�� ���� �Է�" << endl;
		cout << "3. ��ü �����ֱ�" << endl;
		cout << "4. ����" << endl;
		cin >> i;
		
		switch(i)
		{
			case 1:
			{
				cout << "���ϴ� ����� �Է��ϼ���." << endl;
				cin >> str;
				c.setShape(str);
				cout << "���ϴ� �޴��� �����ϼ���." << endl;
				continue;
			}
			case 2:
			{
				int num;
				cout << "���ϴ� ���ڸ� �Է��ϼ���." << endl;
				cin >> num;
				c.setNumber(num);
				cout << "���ϴ� �޴��� �����ϼ���." << endl;
				continue;
			}
			case 3:
			{
				c.printCard();
				cout << "���ϴ� �޴��� �����ϼ���." << endl;
				continue;
			}
			case 4:
			{
				return;
			}
		}
	}
}

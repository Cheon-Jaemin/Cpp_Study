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
		cout << "1. 카드 모양 입력" << endl;
		cout << "2. 카드 숫자 입력" << endl;
		cout << "3. 객체 보여주기" << endl;
		cout << "4. 종료" << endl;
		cin >> i;
		
		switch(i)
		{
			case 1:
			{
				cout << "원하는 모양을 입력하세요." << endl;
				cin >> str;
				c.setShape(str);
				cout << "원하는 메뉴를 선택하세요." << endl;
				continue;
			}
			case 2:
			{
				int num;
				cout << "원하는 숫자를 입력하세요." << endl;
				cin >> num;
				c.setNumber(num);
				cout << "원하는 메뉴를 선택하세요." << endl;
				continue;
			}
			case 3:
			{
				c.printCard();
				cout << "원하는 메뉴를 선택하세요." << endl;
				continue;
			}
			case 4:
			{
				return;
			}
		}
	}
}

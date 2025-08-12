#include <stdio.h>
#include <iostream>
#include "card.h"
using namespace std;

class cardGame
{
	Card Deck[52];

public : 
	void makeDeck()
	{
		char str[30];
		for (int i = 0; i < 13; i++)
		{
			strcpy(str, "heart");
			Deck[i].setShape(str);
			Deck[i].setNumber(i + 1);
		}
		for (int i = 13; i < 26; i++)
		{
			strcpy(str, "diamond");
			Deck[i].setShape(str);
			Deck[i].setNumber(i + 1);
		}
		for (int i = 26; i < 39; i++)
		{
			strcpy(str, "clover");
			Deck[i].setShape(str);
			Deck[i].setNumber(i + 1);
		}
		for (int i = 39; i < 52; i++)
		{
			strcpy(str, "spade");
			Deck[i].setShape(str);
			Deck[i].setNumber(i + 1);
		}
	}

	void showAllDeck()
	{
		for (int i = 0; i < 52; i++)
		{
			Deck[i].printCard();
		}
	}

	void choiceShow()
	{
		int i;
		cin >> i;
		Deck[i - 1].printCard();
	}

	void RandomShow()
	{
		srand((unsigned)time(NULL));
		int random = rand() % 52;
		Deck[random].printCard();
	}

	void shuffleDeck()
	{
		srand((unsigned)time(NULL));

		for (int i = 0; i < 52; i++)
		{
			int random = rand() % 52;
			Card temp = Deck[i];
			Deck[i] = Deck[random];
			Deck[random] = temp;
		}
	}
};

void Program()
{
	cardGame game;

	while (true)
	{
		int i;
		cout << "1. 덱을 생성합니다." << endl;
		cout << "2. 전체 덱을 봅니다." << endl;
		cout << "3. 선택한 순서의 카드를 봅니다." << endl;
		cout << "4. 랜덤한 카드를 한장 봅니다." << endl;
		cout << "5. 카드를 섞습니다." << endl;
		cout << "6. 프로그램을 종료합니다." << endl;
		cin >> i;
		switch (i)
		{
			case 1:
			{
				game.makeDeck();
				cout << "메뉴를 선택하세요." << endl;
				continue;
			}
			case 2:
			{
				game.showAllDeck();
				cout << "메뉴를 선택하세요." << endl;
				continue;
			}
			case 3:
			{
				cout << "숫자를 입력하세요.(1 ~ 52)" << endl;
				game.choiceShow();
				cout << "메뉴를 선택하세요." << endl;
				continue;
			}
			case 4:
			{
				game.RandomShow();
				cout << "메뉴를 선택하세요." << endl;
				continue;
			}
			case 5:
			{
				game.shuffleDeck();
				cout << "메뉴를 선택하세요." << endl;
				continue;
			}
			case 6:
			{
				return;
			}
		}
	}
}

void main(void)
{
	Program();
	return;
}
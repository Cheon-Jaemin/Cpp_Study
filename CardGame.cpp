#include<iostream>
#include <random>
#include "MyCard.h"
#include "CardGame.h"

using namespace std;

//Ŭ������ : CardGame
// ������� : Card ��ü 52���� ������ �� �ִ� �迭 cards
// ������ : ���̾Ƹ��, Ŭ�ι�, ��Ʈ, �����̵� ����� 1���� 13������ ���ڸ� ���� 52�� ī�� ��ü�� �����ؼ� cards �迭�� �ʱ�ȭ
// �޼��� : 
// showAllCardInfo -  52���� ī�带 ��� �ֿܼ� ���, �Ű������� ��ȯ���� ����
// getCard - �ϳ��� ������ ���޹޾� cards���� �ش� ��ġ�� Card ��ü�� ��ȯ
// getCard - ������ �߻����� cards�� ������ ��ġ�� ��ü�� ��ȯ
// shuffle - cards �迭�� �迭 ��Ҹ� �����ϰ� ������

const char* arr_shapes[] = { "club", "spade", "diamond", "heart" };

CardGame::CardGame()
{
	int card_num = 0;
	for (int i = 0; i < sizeof(arr_shapes) / sizeof(char*); i++)
	{
		for (int j = 0; j < 13; j++, card_num++)
		{
			cards[card_num].setShape(arr_shapes[i]);
			cards[card_num].setNumber(j + 1);
		}
	}
}

CardGame::~CardGame() 
{

}

void CardGame::showAllCardInfo() const
{
	for (int i = 0; i < 52; i++)
	{
		cards[i].showCardInfo();
	}
}
MyCard CardGame::getCard(int index) const 
{
	
	MyCard c = cards[index];
	return c;

}
MyCard CardGame::getCard()const 
{
	srand((unsigned)time(NULL));
	int random = rand() % 52;

	MyCard c = cards[random];
	return c;
}
void CardGame::shuffle() 
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 52; i++)
	{
		int random = rand() % 52;
		MyCard temp = cards[i];
		cards[i] = cards[random];
		cards[random] = temp;
	}
}

void CardGame::showCard(MyCard c) 
{
	c.showCardInfo();
}
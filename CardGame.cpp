#include<iostream>
#include <random>
#include "MyCard.h"
#include "CardGame.h"

using namespace std;

//클래스명 : CardGame
// 멤버변수 : Card 객체 52개를 저장할 수 있는 배열 cards
// 생성자 : 다이아몬드, 클로버, 하트, 스페이드 모양의 1부터 13까지의 숫자를 갖는 52개 카드 객체를 생성해서 cards 배열을 초기화
// 메서드 : 
// showAllCardInfo -  52개의 카드를 모두 콘솔에 출력, 매개변수와 반환값이 없음
// getCard - 하나의 정수를 전달받아 cards에서 해당 위치의 Card 객체를 반환
// getCard - 난수를 발생시켜 cards의 랜덤한 위치의 객체를 반환
// shuffle - cards 배열의 배열 요소를 랜덤하게 섞어줌

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
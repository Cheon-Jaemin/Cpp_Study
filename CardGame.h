#pragma once
#include "MyCard.h"

#define CARD_TOTAL_NUM 52

//Ŭ������ : CardGame
// ������� : Card ��ü 52���� ������ �� �ִ� �迭 cards
// ������ : ���̾Ƹ��, Ŭ�ι�, ��Ʈ, �����̵� ����� 1���� 13������ ���ڸ� ���� 52�� ī�� ��ü�� �����ؼ� cards �迭�� �ʱ�ȭ
// �޼��� : 
// showAllCardInfo -  52���� ī�带 ��� �ֿܼ� ���, �Ű������� ��ȯ���� ����
// getCard - �ϳ��� ������ ���޹޾� cards���� �ش� ��ġ�� Card ��ü�� ��ȯ
// getCard - ������ �߻����� cards�� ������ ��ġ�� ��ü�� ��ȯ
// shuffle - cards �迭�� �迭 ��Ҹ� �����ϰ� ������
class CardGame {
private :
	MyCard cards[CARD_TOTAL_NUM];

public:
	CardGame();
	~CardGame();

	void showAllCardInfo() const ;
	MyCard getCard(int index) const ;
	MyCard getCard()const ;
	void shuffle() ;
	void showCard(MyCard c);

};

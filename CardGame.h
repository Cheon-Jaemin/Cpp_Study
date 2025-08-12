#pragma once
#include "MyCard.h"

#define CARD_TOTAL_NUM 52

//클래스명 : CardGame
// 멤버변수 : Card 객체 52개를 저장할 수 있는 배열 cards
// 생성자 : 다이아몬드, 클로버, 하트, 스페이드 모양의 1부터 13까지의 숫자를 갖는 52개 카드 객체를 생성해서 cards 배열을 초기화
// 메서드 : 
// showAllCardInfo -  52개의 카드를 모두 콘솔에 출력, 매개변수와 반환값이 없음
// getCard - 하나의 정수를 전달받아 cards에서 해당 위치의 Card 객체를 반환
// getCard - 난수를 발생시켜 cards의 랜덤한 위치의 객체를 반환
// shuffle - cards 배열의 배열 요소를 랜덤하게 섞어줌
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

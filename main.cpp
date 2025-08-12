//파일: main.cpp, CardGame.cpp, Card.cpp, CardGame.h, Card.h
#include <iostream>
#include "MyCard.h"
#include "CardGame.h"

using namespace std;

//main.cpp
//사용자 메뉴를 화면에 보여주고 사용자가 입력한 기능을 수행
// 종료 메뉴가 선택하기 전까지 계속 반복
//사용자 메뉴
// 1. 모든 카드를 보여줍니다
// 2. 카드를 섞습니다
// 3. 카드 한장을 선택합니다 ( 3번 메뉴를 선택하면 1부터 52번까지의 카드 중 하나를 선택할 수 있음 )
// 4. 랜덤하게 한 장의 카드를 선택합니다
// 5. 게임을 시작합니다
//    플레이어가 먼저 카드를 선택하면 ( 1부터 52까지의 숫자 중 하나를 선택)
//    딜러가 카드를 선택 (모두 4장의 카드를 선택할 수 있음)
//	  선택한 카드는 다시 선택할 수 없음
//    각 각 네장의 카드가 선택되면 결과를 보여줌
//    동일한 숫자나 모양이 2개 2점, 3개 3점, 4개 4점
//    숫자와 모양이 동일한 경우가 2개 4점, 3개면 6점, 4개면 8점
// 6. 종료합니다

CardGame myGame;

void func1() {
	cout << "1번 기능 선택 " << endl;
	myGame.showAllCardInfo();
}

void func2() {
	cout << "2번 기능 선택 " << endl;
	myGame.shuffle();

}

void func3() {
	int index;
	cout << "3번 기능 선택 " << endl;
	cout << "몇 번 카드를 보여줄까요?";
	cin >> index;
	myGame.showCard(myGame.getCard(index - 1));

}


void func4() {
	cout << "4번 기능 선택 " << endl;
	myGame.showCard(myGame.getCard());
}


void showMenu() {
	cout << "아래 메뉴 번호를 누르고 작업하세요. 종료를 원하시면 q 또는 Q\n";
	cout << "1. 모든 카드를 보여줍니다\n";
	cout << "2. 카드를 섞습니다\n";
	cout << "3. 한장의 카드를 선택합니다\n"; //검색결과 : 이름, 번호, 국어점수, 영어점수, 수학점수 출력
	cout << "4. 랜덤하게 한 장의 카드를 선택합니다\n"; //검색결과 : 이름, 번호, 국어점수, 영어점수, 수학점수 출력
	cout << "종료를 원하시면 q 또는 Q를 누르세요\n";

}


void runMenu(char menu) {

	switch (menu) {
	case '1': func1();
		break;
	case '2':func2();
		break;
	case '3':func3();
		break;
	case '4':func4();
		break;
	case 'q':
	case'Q':
		printf("프로그램을 종료합니다\n");
		break;
	default:
		printf("잘못된 메뉴입력입니다\n");

	}
}

void selectMenu() {

	char menu_number = NULL;

	do {

		cout << "메뉴선택 : ";
		cin >> menu_number;

		runMenu(menu_number);

	} while (menu_number != 'q' && menu_number != 'Q');

}

int main() {

	showMenu();
	selectMenu();

	return 0;
}

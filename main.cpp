//����: main.cpp, CardGame.cpp, Card.cpp, CardGame.h, Card.h
#include <iostream>
#include "MyCard.h"
#include "CardGame.h"

using namespace std;

//main.cpp
//����� �޴��� ȭ�鿡 �����ְ� ����ڰ� �Է��� ����� ����
// ���� �޴��� �����ϱ� ������ ��� �ݺ�
//����� �޴�
// 1. ��� ī�带 �����ݴϴ�
// 2. ī�带 �����ϴ�
// 3. ī�� ������ �����մϴ� ( 3�� �޴��� �����ϸ� 1���� 52�������� ī�� �� �ϳ��� ������ �� ���� )
// 4. �����ϰ� �� ���� ī�带 �����մϴ�
// 5. ������ �����մϴ�
//    �÷��̾ ���� ī�带 �����ϸ� ( 1���� 52������ ���� �� �ϳ��� ����)
//    ������ ī�带 ���� (��� 4���� ī�带 ������ �� ����)
//	  ������ ī��� �ٽ� ������ �� ����
//    �� �� ������ ī�尡 ���õǸ� ����� ������
//    ������ ���ڳ� ����� 2�� 2��, 3�� 3��, 4�� 4��
//    ���ڿ� ����� ������ ��찡 2�� 4��, 3���� 6��, 4���� 8��
// 6. �����մϴ�

CardGame myGame;

void func1() {
	cout << "1�� ��� ���� " << endl;
	myGame.showAllCardInfo();
}

void func2() {
	cout << "2�� ��� ���� " << endl;
	myGame.shuffle();

}

void func3() {
	int index;
	cout << "3�� ��� ���� " << endl;
	cout << "�� �� ī�带 �����ٱ��?";
	cin >> index;
	myGame.showCard(myGame.getCard(index - 1));

}


void func4() {
	cout << "4�� ��� ���� " << endl;
	myGame.showCard(myGame.getCard());
}


void showMenu() {
	cout << "�Ʒ� �޴� ��ȣ�� ������ �۾��ϼ���. ���Ḧ ���Ͻø� q �Ǵ� Q\n";
	cout << "1. ��� ī�带 �����ݴϴ�\n";
	cout << "2. ī�带 �����ϴ�\n";
	cout << "3. ������ ī�带 �����մϴ�\n"; //�˻���� : �̸�, ��ȣ, ��������, ��������, �������� ���
	cout << "4. �����ϰ� �� ���� ī�带 �����մϴ�\n"; //�˻���� : �̸�, ��ȣ, ��������, ��������, �������� ���
	cout << "���Ḧ ���Ͻø� q �Ǵ� Q�� ��������\n";

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
		printf("���α׷��� �����մϴ�\n");
		break;
	default:
		printf("�߸��� �޴��Է��Դϴ�\n");

	}
}

void selectMenu() {

	char menu_number = NULL;

	do {

		cout << "�޴����� : ";
		cin >> menu_number;

		runMenu(menu_number);

	} while (menu_number != 'q' && menu_number != 'Q');

}

int main() {

	showMenu();
	selectMenu();

	return 0;
}

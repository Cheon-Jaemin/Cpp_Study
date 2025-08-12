#include <stdio.h>
#include <iostream>
using namespace std;

class Seller
{
	int price;
	int numOfProduct;
	int myMoney;

public:
	Seller(int price, int num, int money) : price(price), numOfProduct(num), myMoney(money)
	{
	}

	void ShowSalesResult() const
	{
		cout << "상품가격 : " << price << endl;
		cout << "상품개수 : " << numOfProduct << endl;
		cout << "현금 : " << myMoney << endl << endl;
	}
};
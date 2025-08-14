#include <stdio.h>
#include <iostream>
using namespace std;

class MyCar 
{
private:
	int dorNum;
	char color[30];
public:
	MyCar() : MyCar(4, "black") 
	{
	}
	MyCar(int num, const char* str) 
	{
		dorNum = num;
		strcpy(color, str);
	}
	void showCarInfo() 
	{
		cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color << endl;
	}
};

class MySunRoofCar : public MyCar
{
	bool bSunRoof;

public:

	MySunRoofCar(int num, const char* str, bool sunRoof) : MyCar(num, str)
	{
		bSunRoof = sunRoof;
	}

	bool isSunRoof()
	{
		return bSunRoof;
	}

	void showCarInfo() //�޼ҵ� �������̵�
	{
		if (bSunRoof)
		{
			cout << "����� ����, ";
		}
		MyCar::showCarInfo();
	}
};

void main(void)
{
	MyCar car1(4, "white");
	car1.showCarInfo();
	
	MyCar car2(2, "red");
	car2.showCarInfo();

	MySunRoofCar car3(4, "black", true);
	car3.showCarInfo();
	
	return;
}

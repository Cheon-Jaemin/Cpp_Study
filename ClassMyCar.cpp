#include <stdio.h>
#include <iostream>
using namespace std;

class MyCar
{
private:
	char color[30];
	int dorNum;

public:
	void showCarInfo()
	{
		cout << "�� ���� : " << dorNum << ", �ڵ��� ���� : " << color << endl;
	}

	void setCarInfo(int num, const char* str)
	{
		dorNum = num;
		strcpy(color, str);
	}
};

void main(void)
{
	MyCar car1;
	car1.setCarInfo(4, "white");
	car1.showCarInfo();

	MyCar car2;
	car2.setCarInfo(3, "red");
	car2.showCarInfo();
}

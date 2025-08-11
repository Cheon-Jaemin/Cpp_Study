#include <stdio.h>
#include <iostream>
using namespace std;

class MyTv
{
private:
	char color[30];
	int channel;
	bool power;

public:
	void setTvInfo(const char* str, int ch)
	{
		strcpy(color, str);
		channel = ch;
	}

	void ShowTvInfo()
	{
		cout << "Ã¤³Î : " << channel << endl;
		cout << "»ö : " << color << endl;
	}

	void powerOnOff()
	{
		power = !power;
	}

	void channerUp()
	{
		channel++;
	}

	void channerDown()
	{
		channel--;
	}
};

void main(void)
{
	MyTv t1;
	t1.setTvInfo("white", 7);
	t1.ShowTvInfo();

	MyTv t2;
	t2.setTvInfo("red", 11);
	t2.ShowTvInfo();
	cout << endl;
}
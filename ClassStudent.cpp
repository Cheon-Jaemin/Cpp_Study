#include <stdio.h>
#include <iostream>
using namespace std;

class Student
{
private:
	char name[30];
	int ban;
	int no;
	int kor;
	int eng;
	int math;

public:
	void InsertStudentInfo()
	{
		cin >> name >> kor >> eng >> math;
	}

	int getTotal()
	{
		int Total = kor + eng + math;
		return Total;
	}

	float getAverage()
	{
		float Average = (getTotal() / 3);
		return Average;
	}
};

void func1()
{
	//길이가 5인 배열에 학생 객체 저장 사용자로부터 입력받아 전체 평균
	Student arr[5];
	float AllAverage;
	float StudentAverageSum = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 학생의 정보 (이름, 국, 영, 수 순서대로)" << endl;
		arr[i].InsertStudentInfo();

		StudentAverageSum += arr[i].getAverage();
	}

	AllAverage = StudentAverageSum / 5;

	cout << "전체 평균 : " << AllAverage << endl;
}

void main(void)
{
	//Student s1;
	//strcpy(s1.name, "철수");
	//s1.kor = 80;
	//s1.eng = 80;
	//s1.math = 80;
	//cout << s1.name << " : " << "총점 - " << s1.getTotal() << "점, " << "평균 - " << s1.getAverage() << "점" << endl;

	//Student s2;
	//strcpy(s2.name, "영희");
	//s2.kor = 90;
	//s2.eng = 90;
	//s2.math = 90;
	//cout << s2.name << " : " << "총점 - " << s2.getTotal() << "점, " << "평균 - " << s2.getAverage() << "점" << endl;
	//cout << endl;
	
	func1();
	return;
}
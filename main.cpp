#include <stdio.h>
#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

vector<Student> allStudent;
vector<Student>::iterator it;

void inputData() 
{
	Student s;
	s.inputData();
	allStudent.push_back(s);
}

void printData()
{
	for (it = allStudent.begin(); it != allStudent.end(); it++)
	{
		it->printData();
	}
}

void program()
{
	char flag;

	while (true)
	{
		cout << "1. 데이터 입력" << endl;
		cout << "2. 입력한 모든 정보 출력" << endl;
		cout << "3. 이름으로 검색하기" << endl;
		cout << "4. 전화번호로 검색하기" << endl;
		cout << "5. 이름 입력 받아 평균과 총점 출력" << endl;
		cout << "6. 평균 점수가 높은 순으로 이름을 출력" << endl;
		cout << "종료를 원하시면 q 또는 Q를 누르세요" << endl;
		cin >> flag;

		switch (flag)
		{
			case '1':
			{
				inputData();
				break;
			}
			case '2':
			{
				printData();
				break;
			}
			case 'q':
			{
				return;
			}
			case 'Q':
			{
				return;
			}
		}
	}
}

int main(void)
{
	program();
	return 0;
}
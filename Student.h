#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Student
{
	string name;
	string phone;
	int english;
	int korean;
	int math;
	int science;

public:
	Student();

	void inputData();
	void printData();
	int totalPoint();
	double averagePoint();
};
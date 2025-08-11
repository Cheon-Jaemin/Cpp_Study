#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int getSum(int a, int b)
{
	return a + b;
}

double getSum(double a, double b)
{
	return a + b;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("a : %d\nb : %d", *a, *b);
}

void swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
	printf("a : %c\nb : %c", *a, *b);
}

void swap(double *a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
	printf("a : %.2lf\nb : %.2lf", *a, *b);
}

void main(void)
{
	char a = 'a';
	char b = 'b';

	swap(&a, &b);
	
	return;
}
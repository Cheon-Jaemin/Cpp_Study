#include<stdio.h>

void func1()
{
	//���� 1-1
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1 : %d, num2 : %d \n", num1, num2);
}

void func2()
{
	//����1-2
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("%d \n", num);
}

void func3()
{
	//���� 1-3
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1�� ����Ű�� �� : %d \nptr2�� ����Ű�� �� : %d", *ptr1, *ptr2);
}

void func4()
{
	//���� 2-1
	int var = 30;
	int* ptr = &var;

	(*ptr)++;
	printf("var : %d", *ptr);
}

void func5()
{
	//���� 2-2
	double pi = 3.14;
	double var;
	scanf("%lf", &var);
	double* ptr = &var;
	printf("���� ���� : %.2lf", (*ptr) * (*ptr) * pi);
}

void main()
{
	func5();
}

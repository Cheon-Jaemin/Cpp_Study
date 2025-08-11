#include <stdio.h>

void func1()
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d\n", num);
}

void func2()
{
	int n1 = 10 , n2 = 20;
	int* p1, * p2;

	p1 = &n1;
	p2 = &n2;

	(*p1) += 10;
	(*p2) -= 10;

	p1 = &n2;
	p2 = &n1;

	printf("p1 : %d \np2 : %d", *p1, *p2);
}

void func3()
{
	int var = 30;
	int* p = &var;

	(*p)++;

	printf("%d\n", *p);
}

void func4()
{
	double pi = 3.14;
	double var;
	double* p = &var;

	scanf("%lf", &var);

	double surface = pi * (*p) * (*p);

	printf("원의 면적 : %.2lf", surface);
}

void main(void)
{
	func4();
	return;
}

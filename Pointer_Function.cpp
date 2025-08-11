#include <stdio.h>

void valueSwap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	printf("a : %d\n", a);
	printf("b : %d\n", b);
}

void callByValue()
{
	int val1 = 10;
	int val2 = 20;
	valueSwap(val1, val2);

	printf("val1 : %d\n", val1);
	printf("val2 : %d\n", val2);
}

void referenceSwap(int *a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void callByReference()
{
	int val1 = 10;
	int val2 = 20;

	printf("Before : %d, %d\n", val1, val2);
	referenceSwap(&val1, &val2);
	printf("After : %d, %d\n", val1, val2);
}

void main(void)
{
	callByReference();
	return;
}
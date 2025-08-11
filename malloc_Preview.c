#include <stdio.h>
#include <stdlib.h>

void func1()
{
	int* p = (int*)malloc(sizeof(int));
	(*p) = 20;
	printf("%d", *p);
	free(p);
}

void func2()
{
	char* p = (char*)malloc(sizeof(char));
	(*p) = 'a';
	printf("%c", *p);
	free(p);
}

void func3()
{
	int* p = (int*)malloc(sizeof(int) * 7);
	for (int i = 0; i < 7; i++)
	{
		p[i] = i + 1;
		printf("%d ", p[i]);
	}
	free(p);
}

void func4()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = (i + 1) * 3;	
		printf("%d ", arr[i]);
	}
}

void func5()
{
	int* arr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = (i + 1) * 3;
		printf("%d ", arr[i]);
	}
	free(arr);
}

void func6()
{
	char* Name = (char*)malloc(sizeof(char) * 30);

	scanf("%s", Name);
	
	printf("%s", Name);
	free(Name);
}

void func7()
{
	char* str_names[5];
	
	for (int i = 0; i < 5; i++)
	{
		str_names[i] = (char*)malloc(sizeof(char) * 30);
	}
	
	for (int i = 0; i < 5; i++)
	{
		free(str_names[i]);
	}
}
void main()
{
	func6();
	return;
}

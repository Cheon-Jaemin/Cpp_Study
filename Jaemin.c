#include<stdio.h>
//1. 사용자로부터 입력받은 정수 n이 짝수인지 홀수인지 출력하세요
void func1(int n) 
{
	if (n % 2 == 0)
	{
		printf("짝수입니다.");
	}
	else
	{
		printf("홀수입니다.");
	}
}

//2. 1부터 100까지의 정수 중 3의 배수를 모두 출력하세요
//(반드시 continue를 사용해 구현, coninue 사용법을 모른다면 아는 만큼 구현)
void func2()
{
	for (int i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
			continue;
		}
	}
}

//3. 1부터 10까지의 합을 반복문을 이용해서 구하세요
void func3() 
{
	int a = 0;
	for (int i = 1; i <= 10; i++)
	{
		a = (a + i);
	}
	printf("%d", a);
}

//4. 길이가 10인 정수형 배열을 만들고 사용자로부터 정수값을 입력받아 저장하세요
void func4() 
{
	int args[10];
	for (int i = 0; i < 10; i++)
	{
		args[i] = scanf("%d", args[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d", args[i]);
	}
}

//5. 하나의 정수를 입력받아서 3의 배수이면 1, 아니면 0을 반환하는 함수를 구현하세요
int isMultipleOfThree(int num) {

}

//6. 사용자가 입력한 문자열에 소문자가 있으면 모두 대문자로 바꾸는 함수를 구현하세요
//(library 함수 사용하지 않을 것)
void func6() {


}
//7. 포인터란 무엇인가 ?
//8. int 타입의 변수 num을 선언하고 20을 저장하시오.포인터 변수를 선언하고 num의 주소를
//저장한 후 포인터 변수를 이용해 num에 저장된 값을 출력하시오(10점)
//9 다음 코드의 출력 결과를 작성하시오(20점)
//int arr[3] = { 89, 50, 71 };
//int* ptr = arr;
//
//printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
//
//printf("%d ", *ptr);  ptr++;
//printf("%d ", *ptr);  ptr++;
//printf("%d ", *ptr);
//printf("\n");

//10. 두 개의 정수값을 서로 바꾸는 함수(call by reference)를 구현(20점)
//int a = 3, b = 5;
//void swap(int* p1, int* p2) {
//}

int main() 
{
	func4();
	return 0;
}
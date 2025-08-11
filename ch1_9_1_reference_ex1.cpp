#include<iostream>
using namespace std;

//double형 변수 d를 선언하고 3.1로 초기화
//레퍼런스 변수 ref가 변수 d를 참조하도록 한다.
//d와 ref를 출력하고 각각의 주소값을 출력한다
void func1_9_2_2() {
	double d = 3.1;
	double& ref = d;

	cout << d << endl;
	cout << ref << endl;

	cout << &d << endl;
	cout << &ref << endl;

}

//char형 변수 ch1을 선언하고 'A'로 초기화한다
//레퍼런스 변수 ref1과 ref2가 ch1을 참조하도록 하는 코드를 완성
//다음 코드의 출력 결과는?
void func1_9_2_1() {

	char c1 = 'A';
	char& ref1 = c1;
	char& ref2 = c1;

	cout << c1 << endl;
	cout << ref1 << endl;

	ref2++;

	cout << c1 << endl;
	cout << ref1 << endl;
}

// int형 변수에 저장된 값을 swap하는 함수를
// 포인터를 매개변수로 전달받아서 구현
void SwapByRef(int* p1, int* p2) {
	cout << "SwapByRef(int* p1, int* p2)" << endl;
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// int형 변수에 저장된 값을 swap하는 함수를
// 참조자를 매개변수로 전달받아서 구현
void SwapByRef(int& ref1, int& ref2)
{
	cout << "SwapByRef(int& ref1, int& ref2)" << endl;
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void test_swapByRef(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	SwapByRef(&val1, &val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
}


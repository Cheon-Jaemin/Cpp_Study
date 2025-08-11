#include<iostream>
using namespace std;

//double�� ���� d�� �����ϰ� 3.1�� �ʱ�ȭ
//���۷��� ���� ref�� ���� d�� �����ϵ��� �Ѵ�.
//d�� ref�� ����ϰ� ������ �ּҰ��� ����Ѵ�
void func1_9_2_2() {
	double d = 3.1;
	double& ref = d;

	cout << d << endl;
	cout << ref << endl;

	cout << &d << endl;
	cout << &ref << endl;

}

//char�� ���� ch1�� �����ϰ� 'A'�� �ʱ�ȭ�Ѵ�
//���۷��� ���� ref1�� ref2�� ch1�� �����ϵ��� �ϴ� �ڵ带 �ϼ�
//���� �ڵ��� ��� �����?
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

// int�� ������ ����� ���� swap�ϴ� �Լ���
// �����͸� �Ű������� ���޹޾Ƽ� ����
void SwapByRef(int* p1, int* p2) {
	cout << "SwapByRef(int* p1, int* p2)" << endl;
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// int�� ������ ����� ���� swap�ϴ� �Լ���
// �����ڸ� �Ű������� ���޹޾Ƽ� ����
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


/*
const����ָ��--����ָ��
�ص㣺ָ���ָ������޸ģ�ָ��ָ���ֵ�������޸�

const����p--ָ�볣��
�ص㣺ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�

const����ָ�������p
�ص㣺ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵ�������޸�


ָ�������

ָ��ͺ���

ָ�롢���������
*/


#include<iostream>
using namespace std;

void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 " << a << " " << b << endl;

}

void swap02(int *pp1, int *pp2) {
	int temp = *pp1;
	*pp1 = *pp2;
	*pp2 = temp;
	cout << "swap02 " << *pp1 << " " << *pp2 << endl;

}

void bubbleSort(int *arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}

void printCout(int * arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << *(arr + i) << endl;
	}
}

int main() {
/*	int a = 10;
	int b = 10;
	int c = 20;
	const int * p = &a;	//����ָ��
//	*p = 20;	����
	p = &b;
	cout << p << " " << *p << endl;

	int * const p1 = &a;
	*p1 = 100;
	cout << p1 << " " << *p1 << endl;

	const int * const p2 = &a;
	cout << p2 << " " << *p2 << endl;

	//ָ�������
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	cout << arr[0] << endl;
	int * p3 = arr;
	cout << *p3 << endl;
	p3++;
	cout << *p3 << arr[1] << *(p3+1) << "and" << *p3+1 << endl;
	cout << *(p3 + 1) << "and" << *p3 + 1 << endl;
	 
	for (int i = 0; i < 10; i++) {
		cout << *p3 << endl;
		p3++;
	}

	//ָ��ͺ���
	//1.ֵ����
	swap01(a, c);
	cout << a << " " << c << endl;

	//2.��ַ����
	swap02(&a, &c);
	cout << a << " " << c << endl; */

	//ָ�롢����ͺ���
	//1.��������
	int arr[10] = { 4, 3, 6, 9, 1, 2, 10, 8 ,5, 7 };
	
	//2.����������ʵ��ð������
	int len = sizeof(arr) / sizeof(arr[0]);

	//3.��ӡ����������
	bubbleSort(arr, len);
	printCout(arr, len);

	return 0;
}
/*
1.����һ��ָ��
2��ʹ��ָ��

ָ�����õ��ڴ�ռ�

��ָ��

Ұָ��


*/
#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int * p;
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	cout << *p << endl;

	int * p = NULL;
	cout << *p << endl;

	return 0;
}
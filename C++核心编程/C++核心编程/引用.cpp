/*
2����
2.1 ���õĻ����﷨���������� &���� = ԭ��

2.2 ���õ�ע�����
1.���ñ���Ҫ��ʼ��
2.����һ����ʼ��֮��Ͳ��ܸ�����

2.3 ��������������
���ã���������ʱ�������������õļ������β�����ʵ��
�ŵ�:���Լ�ָ���޸�ʵ�Σ��͵�ַ����Ч��һ�������Ǹ���

2.4 ��������������ֵ
����:�����ǿ�����Ϊ�����ķ���ֵ���ڵ�
ע��:��Ҫ���ؾֲ���������
�÷�:����������Ϊ��ֵ

2.5 ���õı���
���ʣ����õı�����c++�ڲ�ʵ�ֵ���һ��ָ�볣��

2.6 ��������
����:����������Ҫ���������βͣ���ֹ�����
�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��

*/

#include<iostream>

using namespace std;

//��������
//1.ֵ����
void swap01(int a, int b) {
	cout << "ֵ����" << endl;
	int temp = a;
	a = b;
	b = temp;

	cout << "sw01_a = " << a << endl;
	cout << "sw01_b = " << b << endl;
}

//2.��ַ����
void swap02(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "sw02_a = " << *a << endl;
	cout << "sw02_b = " << *b << endl;
}
//���ô���
void swap03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "sw03_a = " << a << endl;
	cout << "sw03_b = " << b << endl;
}

//��Ҫ���ؾֲ���������
int& test01() {
	int a = 10;
	return a;
}

int& test02() {

	static int a = 10;	//��̬�����������ȫ��������ϵͳ�ͷ�
	return a;
}

//���������ã�ת��Ϊint* const ref = &a��
void func1(int &ref) {
	ref = 100;	//ref������
}

//��ӡ�������
void showValue(const int& value) {
	//value = 1000;	//const����֮���βξͲ������޸��ˣ����ܾͺ�ֵ����һ����
	cout << "value =" << value << endl;
}

int main() {
/*	cout << "2.1 ���� ���õĻ����﷨" << endl;
	int a = 10;
	int &b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	cout << "2.2 ���õ�ע������" << endl;
	//int &c;	���ñ���Ҫ��ʼ��
	int c = 20;
	//&b = c;	����һ����ʼ��֮��Ͳ��ܸ�����
	b = c;	//��ֵ�����������Ǹ�������
	cout << a << b << c;	//����20

	cout << "2.3 ��������������" << endl;
	int d = 10;
	swap01(a, d);	//ֵ���ݣ��ββ�������ʵ��
	swap02(&a, &d);	//��ַ���ݣ��βλ�����ʵ��
	swap03(a, d);	//���ô��ݣ��βλ�����ʵ��


	cout << "a = " << a << endl;	//20
	cout << "d = " << d << endl;	//10

	cout << "2.4 ��������������ֵ" << endl;
	int &ref = test01();
	cout << "ref:" << ref << endl;	//��һ����ȷ�����������˱���
	cout << "ref:" << ref << endl;	//�ڶ��δ���a���ڴ��Ѿ��ͷ�

	int &ref2 = test02();
	cout << "ref2:" << ref2 << endl;
	cout << "ref2:" << ref2 << endl;

	test02() = 1000;	//��test02�е�a��ֵ1000��
	cout << "ref2:" << ref2 << endl;
	cout << "ref2:" << ref2 << endl;

	cout << "2.5 ���õı��ʣ�" << endl;
	int a1 = 10;

	//�Զ�ת��Ϊint* const ref = &a;ָ�볣����ָ��ָ�򲻿��Ը��ģ�Ҳ˵��Ϊʲô���ò����Ը���
	int& ref = a;
	ref = 20;	//�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20;

	cout << "a:" << a << endl;
	cout << "ref;" << ref << endl;

	func1(a);
//����:C++�Ƽ������ü�������Ϊ�﷨���㣬���ñ�����ָ�볣�����������е�ָ�����������������������

	cout << "��������" << endl;
	int a2 = 10;
	//int & ref = 10;	//���ñ�������һ��Ϸ�������
	const int & ref1 = 10;	//����const֮�󣬱������������޸�Ϊint temp = 10; const int & ref = temp;
	//ref1 = 20;	//����const֮��ͱ�Ϊֻ�����������޸�
*/
	int a3 = 100;
	showValue(a3);
	cout << "a3 = " << a3 << endl;


	system("pause");
	return 0;
}
/*
4.5.3�������������
����:ͨ�����ص����������ʵ���Լ�����������
*/

#include<iostream>

using namespace std;

//�Զ�������
class MyInteger {
	friend ostream & operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger(){
		m_Num = 0;
	}

	//����ǰ��++�����
	MyInteger& operator++() {
		m_Num++;
		return *this;	//Ϊ�˶�һ�����ݽ��е�������
	}

	//���غ���++�����
	MyInteger operator++(int) {	//int ռλ���� ���õ�������ֵ
		//�� ��¼һ�µ�ʱ�Ľ��
		MyInteger temp = *this;

		//�� ����
		++m_Num;

		//��󽫼�¼���������
		return temp;
	}

	MyInteger& operator--() {
		m_Num--;
		return *this;
	}

	MyInteger operator--(int) {
		//�� ��¼һ�µ�ʱ�Ľ��
		MyInteger temp = *this;

		//�� ����
		m_Num--;

		//��󽫼�¼���������
		return temp;
	}

private:
	int m_Num;

};

//����һ�����������
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}

void test01() {
	MyInteger myint;

	cout << ++myint << endl;
}

void test02() {
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;

}

void test03() {
	MyInteger myint;

	cout << --myint << endl;
}

void test04() {
	MyInteger myint;

	cout << myint << endl;
	cout << --myint << endl;
	cout << myint << endl;

}

int main() {
	//test01();
	//test02();
	//test03();
	test04();

	system("pause");
	return 0;
}
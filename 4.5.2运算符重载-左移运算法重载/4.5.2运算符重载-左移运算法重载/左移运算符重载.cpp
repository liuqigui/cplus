/*
4.5.2�������������
����:��������Զ�����������
*/

#include<iostream>

using namespace std;

//�������㷨����
class Person {
	friend ostream & operator<<(ostream &cout, Person &p);

public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}

	//���ó�Ա�������� ���������
	//�������ó�Ա���������� ���������
	/*void operator<<(Person &p) {

	}*/
private:
	int m_A;
	int m_B;

};

//ֻ������ȫ�ֺ������� ���������
ostream & operator<<(ostream &cout, Person &p) { //���� opeartor<< (cout, p)  �� cout << p
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

void test01() {
	Person p(10, 10);
	/*p.m_A = 10;
	p.m_B = 10;*/

	cout << p << endl ;

}

int main() {

	test01();

	system("pause");
	return 0;
}
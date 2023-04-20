/*
4.5���������
��������ظ���:�����е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
4.5.1�Ӻ����������
����:ʵ�������Զ�������������ӵ�����

*/

#include<iostream>

#include<string>

using namespace std;

class Person {
public:
	//��Ա����������
	/*Person operator+(Person &p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;

		return temp;
	}*/

	int m_A;
	int m_B;
};

//ȫ�ֺ���������
Person operator+(Person &p1, Person &p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;

	return temp;
}

Person operator+(Person &p1, int num) {
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;

	return temp;
}

void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//��Ա�������صı��ʵ���
	//Person p3 = p1.operator+(p2);

	//ȫ�ֺ������صı��ʵ���
	//Person p3 = operator+(p1, p2);

	Person p3 = p1 + p2;

	//���������Ҳ���Է�����������
	Person p4 = p1 + 110;

	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;

}

int main() {
	cout << "4.5.1�Ӻ����������" << endl;
	test01();


	system("pause");
	return 0;
}
/*
1.3.8��ģ������Ԫ

ѧϰĿ��:
������ģ�������Ԫ���������ں�����ʵ��
ȫ�ֺ�������ʵ��-ֱ��������������Ԫ����
ȫ�ֺ�������ʵ�֨C��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

�ܽ�:����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��
*/

#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "����ʵ��--������" << p.m_Name << " ���䣺" << p.m_Age << endl;

}

template<class T1, class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson1(Person<T1, T2> p) {
		cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//��һ����ģ��ĺ����б�
	//���ȫ�ֺ��� ������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};




//1.ȫ�ֺ���������ʵ��
void test01() {
	Person<string, int>p("tom", 12);

	printPerson1(p);
}

void test02() {
	Person<string, int>p("jerry", 21);

	printPerson2(p);
}


int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
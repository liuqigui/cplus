/*
1.3.7��ģ����ļ���д
ѧϰĿ��:
��������ģ���Ա�������ļ���д�����������Լ������ʽ
����
����ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���

���:
�������ʽ1:ֱ�Ӱ���.cppԴ�ļ�
�������ʽ2�ý�������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��

�ܽ�:�����Ľ����ʽ�ǵڶ��֣�����ģ���Ա����д��һ�𣬲�����׺����Ϊ.hpp

*/

#include<iostream>
#include<string>


//1.ֱ�Ӱ���person�ļ�
//#include"person.h"	//����
//#include"person.cpp"

//�����ʽ2�ý�������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��  ��ģ�壡��
#include"person.hpp"

using namespace std;

//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//}

void test01()
{
	Person<string, int> p1("tom", 23);
	p1.showPerson();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
/*
1.3��ģ��
1.3.1��ģ���﷨
��ģ������:
������һ��ͨ���࣬���еĳ�Ա�������Ϳ��Բ������ƶ�����һ�����������������

�ܽ�:��ģ��ͺ���ģ���﷨���ƣ�������ģ��template������࣬�����Ϊ��ģ��
*/

#include<iostream>
#include<string>
using namespace std;

template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "������" << m_Name << " ���䣺" << m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;

};

void test01()
{
	 
	Person<string, int> p1("�����", 18);
	p1.showPerson();

}

int main()
{
	test01();

	system("pause");
	return 0;
}
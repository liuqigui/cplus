/*
1.3.2��ģ���뺯��ģ������

��ģ���뺯��ģ��������Ҫ������:
1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
2.��ģ����ģ������б��п�����Ĭ�ϲ���


�ܽ�:
����ģ��ʹ��ֻ������ʾָ�����ͷ�ʽ
����ģ���е�ģ������б������Ĭ�ϲ���
*/

#include<iostream>
#include<string>

using namespace std;

//��ģ��ͺ���ģ������
template<class NameType, class AgeType=int>//Ĭ��AgeTypeΪint
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
		cout << "name;" << m_Name << " age:" << m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;

};

//1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
	//Person p("�����", 100); �����޷����Զ������Ƶ�
	Person<string, int>p("�����", 1000);
	p.showPerson();


}

//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person<string>p1("��˽�", 999);
	p1.showPerson();
}

int main()
{
	cout << "��ģ���뺯��ģ������" << endl;
	test01();
	test02();

	system("pause");
	return 0;
}
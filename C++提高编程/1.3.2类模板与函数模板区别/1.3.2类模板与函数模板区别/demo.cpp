/*
1.3.2��ģ���뺯��ģ������

��ģ���뺯��ģ��������Ҫ������:
1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
2.��ģ����ģ������б��п�����Ĭ�ϲ���

*/

#include<iostream>

using namespace std;

//��ģ��ͺ���ģ������
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
		cout << "name;" << m_Name << " age:" << m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;

};

int main()
{

	system("pause");
	return 0;
}
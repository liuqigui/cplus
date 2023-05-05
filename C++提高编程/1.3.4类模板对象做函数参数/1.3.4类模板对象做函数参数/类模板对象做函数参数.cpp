/*
1.3.4��ģ���������������
ѧϰĿ��;
����ģ��ʵ�������Ķ����������εķ�ʽ
���������ִ��뷽ʽ:
1.ָ�����������---ֱ����ʾ�������������
2.����ģ�廯---�������еĲ�����Ϊģ����д���
3.������ģ�廯---�������������ģ�廯���д���

�ܽ�:
��ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����н��д���
��ʹ�ñȽϹ㷺�ǵ�һ��:ָ�����������
*/

#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1.ָ�����������-- - ֱ����ʾ�������������
void printPerson1(Person<string, int>&p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int>p("����� ", 100);
	printPerson1(p);
}


//2.����ģ�廯-- - �������еĲ�����Ϊģ����д���
template<class T1, class T2>
void printPerson2(Person<T1, T2>&p)
{
	p.showPerson();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;

}
void test02()
{
	Person<string, int>p1("��˽� ", 100);
	printPerson2(p1);

}

//3.������ģ�廯-- - �������������ģ�廯���д���
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T������Ϊ��" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int>p3("��ɮ ", 100);
	printPerson3(p3);
}

int main()
{
	cout << "1.3.4��ģ���������������" << endl;
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}
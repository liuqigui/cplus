/*
1.3.3��ģ���г�Ա��������ʱ��
��ģ���г�Ա��������ͨ���г�Ա��������ʱ�����������:
��ͨ���еĳ�Ա��������ʼ�Ϳ��Դ���
��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���

�ܽ�:��ģ���еĳ�Ա����������һ��ʼ�ʹ����ģ��ڵ���ʱ��ȥ����
*/

#include<iostream>

using namespace std;

class Person1
{
public:
	void showPerson1()
	{
		cout << "showPerson1()" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "showPerson2()" << endl;
	}
};

//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
template<class T>
class Myclass
{
public:
	T obj;

	//��ģ��ĳ�Ա����
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	Myclass<Person1>m;
	m.func1();
	//m.func2();	����

	Myclass<Person2>m1;
	//m1.func1(); ����
	m1.func2();	
}

int main()
{
	cout << "1.3.3��ģ���г�Ա��������ʱ��" << endl;
	test01();

	system("pause");
	return 0;
}
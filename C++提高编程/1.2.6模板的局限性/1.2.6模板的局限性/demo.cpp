/*
1.2.6ģ��ľ�����
������:
��ģ���ͨ���Բ��������ܵ�



template<class T>
void f(T a, T b)
{
	a = b;
}
�������������ṩ�ĸ�ֵ��������������a��b��һ�����飬���޷�ʵ����

template<class T>
void fu(T a, T b)
{
	if (a > b) {
		...
	}
}
�����������У����T���������ʹ��������Person�������Զ����������ͣ�Ҳ�޷���������
���C++Ϊ�˽���������⣬�ṩģ������أ�����Ϊ��Щ�ض��������ṩ���廯��ģ��


�ܽ�:
�����þ��廯��ģ�壬���Խ���Զ������͵�ͨ�û�
��ѧϰģ�岢����Ϊ��дģ�壬������STL�ܹ�����ϵͳ�ṩ��ģ��
*/

#include<iostream>
#include<string>

using namespace std;

template<class T>
bool myCampare(T &a, T &b)
{
	if (a == b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	cout << myCampare(a, b) << endl;
}

class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	int age;
	string name;

};

template<> bool myCampare(Person &p1, Person &p2)
{
	if (p1.name == p2.name && (p1.age == p2.age)) {
		return 1;
	}
	else
	{
		return 0;
	}
}


void test02()
{
	Person p1("tom", 10);
	Person p2("tom", 10);

	//cout << myCampare(p1, p2) << endl;	//����
	//1.��������� ����==
	
	//2.���þ��廯��Person�İ汾��ʵ�ִ��룬���ȵ���
	cout << myCampare(p1, p2) << endl;

}

int main()
{
	cout << "ģ��ľ�����:" << endl;
	//test01();
	test02();

	system("pause");
	return 0;
}
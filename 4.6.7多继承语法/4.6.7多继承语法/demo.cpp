/*
4.6.7��̳��﷨
C++����һ����̳ж����
�﷨:class����ü̳з�ʽ����1,�̳з�ʽ����2..-
��̳п��ܻ�������������ͬ����Ա���֡���Ҫ������������
C++ʵ�ʿ����в������ö�̳�

*/

#include<iostream>

using namespace std;

//��̳��﷨
class Base1
{
public:

	Base1()
	{
		m_A = 100;
	}

	int m_A;
};

class Base2
{
public:
	
	Base2()
	{
		m_B = 200;
		m_A = 500;
	}

	int m_B;
	int m_A;
};

//���� ��Ҫ�̳�Base1��Base2
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};


void test01()
{

	Son s;
	cout << "sizeof(s):" << sizeof(s) << endl;

	cout << "s.Base1::m_A=" << s.Base1::m_A << endl;
	cout << "s.Base2::m_A=" << s.Base2::m_A << endl;

}

int main()
{
	cout << "��̳��﷨" << endl;
	test01();

	system("pause");
	return 0;
}




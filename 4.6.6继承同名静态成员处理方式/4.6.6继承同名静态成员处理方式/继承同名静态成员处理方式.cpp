/*
4.6.6�̳�ͬ����̬��Ա����ʽ
����:�̳���ͬ���ľ�̬��Ա�������������ν��з���?
��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
����������ͬ����Աֱ�ӷ��ʼ���
�����ʸ���ͬ����Ա��Ҫ��������

�ܽ�:ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʵķ�ʽ(ͨ�������ͨ������)
*/

#include<iostream>

using namespace std;

//�̳�ͬ����̬��Ա����ʽ
class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base->func()" << endl;

	}

	static void func(int a)
	{
		cout << "Son->func(int a)" << endl;
	}

};

int Base::m_A = 100;


class Son :public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son->func()" << endl;

	}

	
};

int Son::m_A = 1200;

void test01()
{
	//1��ͨ������������
	cout << "ͨ������������" << endl;
	Son s;
	cout << "Son->m_A = " << s.m_A << endl;
	cout << "Base->m_A = " << s.Base::m_A << endl;

	//2��ͨ������������
	cout << "ͨ������������" << endl;
	cout << "Son->m_A = " << Son::m_A << endl;

	// ��һ��::����ͨ��������ʽ���ʵڶ���::������ʸ�����������
	cout << "Base->m_A = " << Son::Base::m_A << endl;

}

void test02()
{
	//1��ͨ������������
	cout << "ͨ������������" << endl;
	Son s1;
	s1.func();
	s1.Base::func();

	//2��ͨ������������
	cout << "ͨ������������" << endl;
	Son::func();
	// ��һ��::����ͨ��������ʽ���ʵڶ���::������ʸ�����������
	Son::Base::func();

	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б�����ͬ����Ա����Ҫ��������
	//Son::func(100);
	Son::Base::func(100);

}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
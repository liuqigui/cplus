/*
4.6.2�̳з�ʽ
�̳е��﷨:class����ü̳з�ʽ ����
�̳з�ʽһ��������:
�������̳�
�������̳�
��˽�м̳�

*/

#include<iostream>

using namespace std;

//�̳з�ʽ
//�����̳�
class Base1
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;	//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 10;	//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;	//�����е�˽��Ȩ�޳�Ա ����������Ȼ���ʲ���
	}

};

void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 120;	//����Son1�� m_B�Ǳ���Ȩ�� ������ʲ�����

}

class Base2
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 10;	//�����еĹ���Ȩ�޳�Ա ���������Ǳ���Ȩ��
		m_B = 10;	//�����еı���Ȩ�޳�Ա ���������Ǳ���Ȩ��
		//m_C = 10;	//�����е�˽��Ȩ�޳�Ա ����������Ȼ���ʲ���
	}
};

void test02()
{
	Son2 s2;
	//s2.m_A = 100;	//��Son2�� m_A��Ϊ����Ȩ�ޣ�������ʲ���
	//s2.m_B = 100;	//��Son2�� m_B��Ϊ����Ȩ�ޣ�������ʲ���

}

class Base3
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son3 :private Base3
{
	void func()
	{
		m_A = 100;	//�����еĹ���Ȩ�޳�Ա ����������˽��Ȩ��
		m_B = 100;	//�����еĹ���Ȩ�޳�Ա ���������Ǳ���Ȩ��
		//m_C = 100;	//�����е�˽��Ȩ�޳�Ա ����������˽��Ȩ��
	}

};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;	//����Son3�У�m_A��Ϊ˽��	���ʲ���
		//m_B = 100;	//����Son3�У�m_B��Ϊ˽��	���ʲ���
	}
};

void test03()
{
	Son3 s3;
	//s3.m_A = 100;	//��Son3�� m_A��Ϊ˽��Ȩ�ޣ�������ʲ���
	//s3.m_B = 100;	//��Son3�� m_B��Ϊ˽��Ȩ�ޣ�������ʲ���
	//s3.m_C = 100;	//��Son3�� m_B��Ϊ˽��Ȩ�ޣ�������ʲ���
}

int main()
{


	system("pause");
	return 0;
}
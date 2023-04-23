/*
4.7.2��̬����һ-��������
��������:
�ֱ�������ͨд���Ͷ�̬���������ʵ�������������������ļ�������

��̬���ŵ�:|
��������֯�ṹ����
���ɶ���ǿ
������ǰ�ںͺ��ڵ���չ�Լ�ά��

�ܽ�:C++�����ᳫ���ö�̬��Ƴ���ܹ�,��Ϊ��̬�ŵ�ܶ�


*/

#include<iostream>
#include<string>

using namespace std;

class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}

	int m_Num1;
	int m_Num2;
};

//��̬ ��չ�µĹ��ܣ���Ҫ�޸Ĵ���
//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�

void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 12;

	cout << c.m_Num1 << "+" << c.m_Num2 << " = " << c.getResult("+") << endl;
	
	cout << c.m_Num1 << "-" << c.m_Num2 << " = " << c.getResult("-") << endl;
	
	cout << c.m_Num1 << "*" << c.m_Num2 << " = " << c.getResult("*") << endl;

}

//���ö�̬ʵ�ּ�����

//��̬�ô���
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ�����չ�Լ�ά���Ը�

//ʵ�ּ������ĳ�����

class AbstractCalculator
{
public:
	virtual int getResult(string s)
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//�ӷ���������
class AddCalcultor : public AbstractCalculator
{
public:

	int getResult(string s)
	{
		if(s == "+")
			return m_Num1 + m_Num2;
	}

};

//������������
class SubCalcultor : public AbstractCalculator
{
public:

	int getResult(string s)
	{
		if(s == "-")
			return m_Num1 - m_Num2;
	}

};

//�˷���������
class MulCalcultor : public AbstractCalculator
{
public:

	int getResult(string s)
	{
		if(s == "*")
			return m_Num1 * m_Num2;
	}

};

void test02()
{
	//��̬ʹ��
	//����ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator * abc = new AddCalcultor;
	abc->m_Num1 = 10;
	abc->m_Num2 = 12;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << " = " << abc->getResult("+") << endl;
	delete abc;

	//��������
	abc = new SubCalcultor;
	abc->m_Num1 = 10;
	abc->m_Num2 = 12;

	cout << abc->m_Num1 << "-" << abc->m_Num2 << " = " << abc->getResult("-") << endl;
	delete abc;


	//�˷�����
	abc = new MulCalcultor;
	abc->m_Num1 = 10;
	abc->m_Num2 = 12;

	cout << abc->m_Num1 << "*" << abc->m_Num2 << " = " << abc->getResult("*") << endl;
	delete abc;
}

int main()
{
	cout << "��̬����һ-��������" << endl;
	//test01();
	test02();

	system("pause");
	return 0;
}
/*
4.6.8���μ̳�
���μ̳и���:
	����������̳�ͬһ������
	����ĳ����ͬʱ�̳�������������
	���ּ̳б���Ϊ���μ̳У�������ʯ�̳�
���͵����μ̳а���:


���μ̳�����:
1.��̳��˶�������ݣ���ͬ���̳��˶�������ݣ���������ʹ������ʱ���ͻ���������ԡ�
2������̳��Զ�������ݼ̳������ݣ���ʵ����Ӧ������������������ֻ��Ҫһ�ݾͿ��ԡ�

�ܽ�;
�����μ̳д�������Ҫ����������̳�������ͬ�����ݣ�������Դ�˷��Լ���������
��������̳п��Խ�����μ̳�����
*/

#include<iostream>

using namespace std;

//���μ̳�
class Animal
{
public:
	int m_Age;
};

//������̳� ������μ̳е�����
//�ڼ̳�֮ǰ���Ϲؼ��� virtual��Ϊ��̳�
//Animal���Ϊ �����
class Sheep : virtual public Animal {};
class Tuo : virtual public Animal {};


//����
//class Sheep :public Animal {};
//
//class Tuo :public Animal {};

class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Tuo::m_Age = 28;
	st.Sheep::m_Age = 17;

	//�����μ̳�ʱ����������ӵ����ͬ���� ͨ�������ڼ�������
	cout << "st.Tuo::m_Age" << st.Tuo::m_Age << endl;
	cout << "st.Sheep::m_Age" << st.Sheep::m_Age << endl;

	cout << "st.m_Age" << st.m_Age << endl;
}

int main()
{
	cout << "���μ̳�" << endl;
	test01();

	system("pause");
	return 0;
}
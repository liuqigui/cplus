/*
4.6.3�̳��еĶ���ģ��
����:�Ӹ���̳й����ĳ�Ա����Щ�������������?
*/

#include<iostream>

using namespace std;

//�̳��еĶ���ģ��
class Base
{
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;

};

class Son :public Base
{
public:
	int m_D;

};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת·��
//cl /d1 reportSingleClassLayout���� �ļ���

void test01()
{
	cout << "size of son" << sizeof(Son) << endl;
	//16
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ������������ˣ���˷��ʲ��� ����ȷʵ���̳���
}

int main()
{
	test01();

	system("pause");
	return 0;
}
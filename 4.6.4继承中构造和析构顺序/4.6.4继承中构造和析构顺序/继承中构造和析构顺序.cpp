/*
4.6.4�̳��й��������˳��
��ȭ�̳и���󣬵������������Ҳ����ø���Ĺ��캯��
����:���������Ĺ��������������˭��˭��?

*/

#include<iostream>

using namespace std;

//�̳��еĹ��������˳��
class Base
{
public:
	Base()
	{
		cout << "Base���캯��" << endl;
	}

	~Base()
	{
		cout << "Base��������" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son���캯��" << endl;
	}

	~Son()
	{
		cout << "Son��������" << endl;
	}
};

void test01()
{
	//�̳��еĹ��������˳�����£�
	//�ȹ��츸�� �ٹ������ࣻ������˳���෴
	Son s;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
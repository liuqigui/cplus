/*
4.6�̳�
�̳������������������֮һ
��Щ������֮���������Ĺ�ϵ,������ͼ��:

���Ƿ��֣�������Щ��ʱ���¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ������ԡ�
���ʱ�����ǾͿ��Կ������ü̳еļ����������ظ�����


4.6.1�̳еĻ����﷨
�������ǿ����ܶ���վ�У����й�����ͷ���������ĵײ�����������������б�ֻ���������ݲ�ͬ
���������Ƿֱ�������ͨд���ͼ̳е�д����ʵ����ҳ�е����ݣ���һ�¼̳д��ڵ������Լ��ô�

�̳еĺô��������ظ�����
�﷨��class���� ���̳��� ����
���� Ҳ��Ϊ ������
���� Ҳ��Ϊ ����

*/

#include<iostream>
#include<string>

using namespace std;

//��ͨʵ��ҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���½��ע�ᡣ������������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�������������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++�����������������б�" << endl;
//	}
//
//	void centent()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//
//};
//
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���½��ע�ᡣ������������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�������������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++�����������������б�" << endl;
//	}
//
//	void centent()
//	{
//		cout << "Python��ѧ����Ƶ" << endl;
//	}
//
//};
//
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���½��ע�ᡣ������������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�������������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++�����������������б�" << endl;
//	}
//
//	void centent()
//	{
//		cout << "C++��ѧ����Ƶ" << endl;
//	}
//
//};

//����������
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���½��ע�ᡣ������������ͷ����" << endl;
	}
		
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ�������������ײ���" << endl;
	}
		
	void left()
	{
		cout << "Java��Python��C++�����������������б�" << endl;
	}
};

//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

//CPPҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPPѧ����Ƶ" << endl;
	}
};

void test01() {

	cout << "java������Ƶ��ҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.left();
	ja.content();
	ja.footer();

	cout << "********************************************************" << endl;

	cout << "Python������Ƶ��ҳ�����£�" << endl;
	Python py;
	py.header();
	py.left();
	py.content();
	py.footer();

	cout << "********************************************************" << endl;

	cout << "C++������Ƶ��ҳ�����£�" << endl;
	CPP cpp;
	cpp.header();
	cpp.left();
	cpp.content();
	cpp.footer();

}

int main()
{
	test01();

	system("pause");
	return 0;
}
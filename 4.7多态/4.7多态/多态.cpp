/*
4.7��̬
4.7.1��̬�Ļ�������
��̬��C+���������������֮һ��̬��Ϊ����
����̬��̬:�������غ�������������ھ�̬��̬�����ú�����
����̬��̬:��������麯��ʵ������ʱ��̬

��̬��̬�Ͷ�̬��̬����:
����̬��̬�ĺ�����ַ��󶨡�����׶�ȷ�����̵�ַ��̬
����̬�ĺ�����ַ��󶨡����н׶�ȷ��������ַ

����ͨ���������н����̬

�ܽ᣺
��̬��������
���м̳й�ϵ
��������д�����е��麯��

��̬ʹ������
������ָ�������ָ���������
��д:��������ֵ���ͺ����������б���ȫ���³�Ϊ��д

*/

#include<iostream>

using namespace std;

class Animal
{
public:

	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat : public Animal
{
public:
	//��д ��������ֵ������ ������ �����б� ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��󶨣��ڱ���׶ξ�ȷ�������ĵ�ַ

//�����ִ����è˵��������������ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�Ҳ�������

//��̬��̬����������
//1.�м̳й�ϵ
//2.����Ҫ��д������麯��

//��̬��̬��ʹ��
//�����ָ����������� ִ������Ķ���

void doSpeak(Animal &animal)	//Animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal=" << sizeof(Animal) << endl;
}

int main()
{
	cout << "��̬" << endl;
	//test01();
	test02();

	system("pause");
	return 0;
}
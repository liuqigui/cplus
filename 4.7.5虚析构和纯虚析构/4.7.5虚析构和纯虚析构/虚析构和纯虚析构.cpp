/*
4.7.5�������ʹ�������
��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
�����ʽ:�������е�����������Ϊ���������ߴ�������
�������ʹ�����������:
�����Խ������ָ���ͷ��������
������Ҫ�о���ĺ���ʵ��
�������ʹ�����������;
������Ǵ����������������ڳ�����,�޷�ʵ��������

�������﷨:
virtual ~����(){}

���������﷨:
virtual ~����()=0;

�ܽ�:
1.�������������������������ͨ������ָ���ͷ��������
2.���������û�ж������ݣ����Բ�дΪ��������������
3.ӵ�д���������������Ҳ���ڳ�����

*/

#include<iostream>
#include<string>

using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}

	//�������������Խ�� ����ָ���ͷ�������󲻸ɾ�������
	/*virtual ~Animal()
	{
		cout << "Animal��������������" << endl;
	}*/

	//�������� ��Ҫ����Ҳ��Ҫʵ��
	//���˴�������֮�� �����Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;

	//���麯��
	virtual void speak() = 0;

};

Animal::~Animal()
{
	cout << "Animal�Ĵ�������������" << endl;
}

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat��������������" << endl;
			delete m_Name;
			m_Name == NULL;
		}
	}

	string *m_Name;

};

void test01()
{
	Animal * animal = new Cat("Tom");
	animal->speak();

	//����ָ��������ʱ�� ��������������������� �����������
	delete animal;
}

int main()
{
	cout << "�������ʹ�������" << endl;
	test01();

	system("pause");
	return 0;
}
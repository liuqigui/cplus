/*
4.7.4��̬������-������Ʒ����

����:
������Ʒ�Ĵ�������Ϊ:��ˮ-����-���뱭��-���븨��

���ö�̬����ʵ�ֱ�����,�ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ

*/

#include<iostream>

using namespace std;

class AbstructDrinking
{
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//��������
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee : public AbstructDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//��������
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

class Tea : public AbstructDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���벣������" << endl;
	}

	//��������
	virtual void PutSomething()
	{
		cout << "��������" << endl;
	}
};

//��������
void doWork(AbstructDrinking * abs)
{
	abs->makeDrink();
	delete abs;
}

void test01()
{
	//��������
	doWork(new Coffee);

	cout << "---------------------------------" << endl;
	//������Ҷ
	doWork(new Tea);

}

int main()
{
	cout << "��̬������-������Ʒ����" << endl;
	test01();

	system("pause");
	return 0;
}
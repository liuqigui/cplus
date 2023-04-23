/*
��������:
������Ҫ��ɲ���ΪCPU(���ڼ���)���Կ�(������ʾ)���ڴ���(���ڴ洢)
��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
�����������ṩ�õ��Թ����ĺ���,���ҵ���ÿ����������Ľӿ�
����ʱ��װ��̨��ͬ�ĵ��Խ��й���

*/

#include<iostream>

using namespace std;

//�����cpu��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
	
};

//������Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//������ڴ�����
class Memory
{
public:
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU * cpu, VideoCard * vc, Memory * mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}

	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
		}

		//�ͷ��Կ����
		if (m_vc != NULL)
		{
			delete m_vc;
		}

		//�ͷ��ڴ������
		if (m_mem != NULL)
		{
			delete m_mem;
		}
	}

private:
	CPU * m_cpu;	//cpu�����ָ��
	VideoCard * m_vc;	//�Կ������ָ��
	Memory * m_mem;	//�ڴ��������ָ��
};

//���峧��
class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��cpu��ʼ������!!!" << endl;
	}

};

class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��!!!" << endl;
	}

};

class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢��!!!" << endl;
	}

};

//Lenovo
class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��cpu��ʼ������!!!" << endl;
	}

};

class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��!!!" << endl;
	}

};

class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��!!!" << endl;
	}

};

void test01()
{
	//��һ̨�������
	CPU * interCPU = new IntelCPU;
	VideoCard * intelCard = new IntelVideoCard;
	Memory * intelMem = new IntelMemory;

	//������һ̨����
	Computer * computer1 = new Computer(interCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;

	//�ڶ�̨����
	cout << "------------------------------------------------" << endl;
	cout << "�ڶ�̨����" << endl;
	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	//����̨����
	cout << "------------------------------------------------" << endl;
	cout << "����̨����" << endl;
	Computer * computer3 = new Computer(new LenovoCPU, new LenovoVideoCard, new IntelMemory);
	computer3->work();
	delete computer3;

}

int main()
{
	cout << "������װ" << endl;
	test01();

	system("pause");
	return 0;
}
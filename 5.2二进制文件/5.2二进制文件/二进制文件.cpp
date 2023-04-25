/*
5.2�������ļ�
�Զ����Ƶķ�ʽ���ļ����ж�д�����򿪷�ʽҪָ��Ϊios::binary

5.2.1д�ļ�
�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
����ԭ��:ostream& write(const char * buffer ,int len);
��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

�ܽ�:
���ļ�������������ͨ��write�������Զ����Ʒ�ʽд����


5.2.2���ļ�
�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
����ԭ��: istream& read(char *buffer,int len);
��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ�����

*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//�������ļ�	д�ļ�
class Person
{
public:
	char m_Name[64];	//����
	int m_Age;	//����
};

void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	//4.д�ļ�
	Person p = { "����", 18 };
	Person p1 = { "����", 19 };
	Person p2 = { "����", 20 };

	ofs.write((const char *)&p, sizeof(Person));
	ofs.write((const char *)&p1, sizeof(Person));
	ofs.write((const char *)&p2, sizeof(Person));

	//5.�ر�
	ofs.close();
}

//���ļ�
void test02()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ�
	ifs.open("person.txt", ios::out | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	//4.���ļ�
	Person p;
	Person p1;
	Person p2;
	Person p3;

	ifs.read((char*)&p, sizeof(Person));
	ifs.read((char*)&p1, sizeof(Person));
	ifs.read((char*)&p2, sizeof(Person));
	ifs.read((char*)&p3, sizeof(Person));

	cout << p.m_Name << p.m_Age << endl;
	cout << p1.m_Name << p1.m_Age << endl;
	cout << p2.m_Name << p1.m_Age << endl;
	cout << p3.m_Name << p3.m_Age << endl;

	//5.�ر�
	ifs.close();


}

int main()
{
	cout << "5.2�������ļ�" << endl;
	//test01();
	test02();

	system("pause");
	return 0;
}
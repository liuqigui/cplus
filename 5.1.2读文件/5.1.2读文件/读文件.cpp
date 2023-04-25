/*
5.1.2���ļ�
���ļ���д�ļ���������,���Ƕ�ȡ��ʽ����ڱȽ϶�
���ļ���������:
1.����ͷ�ļ�
#include <fstream>
2.����������
ifstream is;
3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
ifs.open("�ļ�·��"",�򿪷�ʽ);
4.������
���ַ�ʽ��ȡ
5.�ر��ļ�
ifs.close();


�ܽ�:
�����ļ���������ifstream ,����fstream��
������is_open���̿����ж��ļ��Ƿ�򿪳ɹ� 
��close�ر��ļ�
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;
	//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	//4.������
	//��һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//������
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//������ ���Ƽ�
	//char c;
	//while ((c = ifs.get()) != EOF)	//EOF  end of file
	//{
	//	cout << c << endl;
	//}

	//5.�ر��ļ�
	ifs.close();

}

int main()
{
	cout << "���ļ�" << endl;
	test01();

	system("pause");
	return 0;
}
/*
3.1.8 string�����ɾ��

��������:
����string�ַ������в�����Ƴ��ַ�����

����ԭ��:
��string& insert(int pos,const char* s)	//�����ַ���
��string& insert( int pos, const string& str);	//�����ַ���
��string& insert(int pos, int n, char c);	//��ָ��λ�ò���n���ַ�c
��string& erase(int pos, int n = npos);	//ǰ����Pos��ʼ��n���ַ�

�ܽ�:������Ƴ�����ʼ�±궼�Ǵ�0��ʼ
*/

#include<iostream>
#include<string>

using namespace std;

void test01() {
	string str = "hello";
	
	//����
	str.insert(1, "111");
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}
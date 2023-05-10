/*
3.1 string����
3.1.1 string���������:
. string��C++�����ַ�������string��������һ����

string��char *����:
. char*��һ��ָ��
. string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵�������

�ص�:
string���ڲ���װ�˺ܶ��Ա����
����:����find������copy��ɾ��delete�滻replace������insert
string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���

3.1.2 string
���캯�����캯��ԭ��:
string();	//����һ���յ��ַ�������: string str;
string(const qhar* s); //ʹ���ַ���s��ʼ��
string(const string& str);	//ʹ��һ��string�����ʼ����һ��string����
string(int n, char c);	//ʹ��n���ַ�c��ʼ��

�ܽ�: string�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���
*/

#include<iostream>
#include<string>

using namespace std;


void test01() {
	string s1;	//Ĭ�Ϲ���

	const char * str = "hello world";
	string s2(str);
	cout << "s2=" << s2 << endl;

	string s3(s2);

	cout << "s3=" << s3 << endl;

	string s4(10, 'a');
	cout << "s4=" << s4 << endl;

}
int main()
{
	test01();

	system("pause");
	return 0;
}
/*
3.1.7 string�ַ���ȡ
string�е����ַ���ȡ��ʽ������
��char& operator[](int n);	//ͨ��[]��ʽȡ�ַ�
��char& at(int n);	//ͨ��at������ȡ�ַ�
�ܽ�: string�ַ����е����ַ���ȡ�����ַ�ʽ������[]��at
*/

#include<iostream>
#include<string>

using namespace std;

void test01() {
	string str = "hello";
	cout << "str = " << str << endl;

	//ͨ��[]��ʽȡ�ַ�
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}
	cout << endl;

	//ͨ��at������ȡ�ַ�
	for (int i = 0; i < str.size(); i++) {
		cout << str.at(i) << " ";
	}
	cout << endl;

	str[0] = 'x';
	cout << "str = " << str << endl;

	str.at(1) = 'x';
	cout << "str = " << str << endl;


} 

int main()
{
	test01();

	system("pause");
	return 0;
}
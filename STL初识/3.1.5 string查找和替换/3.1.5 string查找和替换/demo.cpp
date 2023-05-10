/*
3.1.5 string���Һ��滻

��������:
������:����ָ���ַ����Ƿ����
���滻:��ָ����λ���滻�ַ���

����ԭ��:
��int find(const string& str, int pos = 8) const;	//����str��һ�γ���λ��,��pos��ʼ����
��int find(const char* s , int pos = e) const;	//����s��һ�γ���λ��,��pos��ʼ����
��int find(const char* s, int pos�� int n) const;	//��posλ�ò���s��ǰn���ַ���һ��λ��
��int find(const char c, int pos = 0) const;	//�����ַ�c��һ�γ���λ��
��int rfind(const string& str, int pos = npos ) const;	//����str���һ��λ��,��pos��ʼ����
��int rfind(const char* s, int pos = npos) const;	//����s���һ�γ���λ��,��pos��ʼ����
��int rfind(const char* s�� int pos�� int n) const;	//��pos����s��ǰn���ַ���󡪴�λ��
��int rfind(const char c, int pos = e) const;	1/�����ַ�c���һ�γ���λ��
��string& replace(int pos�� int n��const string& str);	//�滻��pos��ʼn���ַ�Ϊ�ַ���str
��string& replace(int pos, int n,const char* s );	//�滻��pos��ʼ��n���ַ�Ϊ�ַ���

�ܽ�:
. find�����Ǵ�������rfind��������
. find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
. replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���

*/

#include<iostream>
#include<string>

using namespace std;

//1.����
void test01() {
	string str1 = "abcdefde";
	int pos = str1.find("de");
	cout << "pos = " << pos << endl;
	cout << str1[3] << endl;

	pos = str1.rfind("de");	//rfind����������ң�find�������Ҳ��ҡ�
	cout << "pos = " << pos << endl;
}

//2.�滻
void test02() {
	string str1 = "abcdefg";

	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;

}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
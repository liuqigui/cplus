/*
3.1.9 string�Ӵ���������:
�����ַ����л�ȡ��Ҫ���Ӵ�
����ԭ��:
string substr(int pos - 0,int w - npos) const;If������pos��ʼ��n���ַ���ɵ��ַ���

�ܽ�:�����������Ӵ�����,������ʵ�ʿ����л�ȡ��Ч����Ϣ
*/

#include<iostream>
#include<string>

using namespace std;

void test01() {
	string str = "abcdef";

	string sub_str = str.substr(1, 3);

	cout << "sub_str = " << sub_str << endl;

	
}

//ʵ�ò���
void test02() {
	string email = "lisi@sina.com";

	//���ʼ���ַ�� ��ȡ �û���Ϣ
	int pos = email.find("@");
	string userName = email.substr(0, pos);
	cout << userName << endl;

}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}
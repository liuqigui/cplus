/*
3.1.6 string�ַ����Ƚ�
��������:
���ַ���֮��ıȽϱȽϷ�ʽ:
���ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
=����0
>����1
<����-1

����ԭ��:
��int compare( const string &s) const;  ���ַ���s�Ƚ�
��int compare( const char *s, const;l8��������s�Ƚ�
*/

#include<iostream>

using namespace std;

void test01() {
	string str1 = "hello";
	string str2 = "hello";

	if (str1.compare(str2) == 0) {
		cout << "str1����str2" << endl;
	}
	else if (str1.compare(str2) > 0) {
		cout << "str1����str2" << endl;
	}
	else {
		cout << "str1С��str2" << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}
/*
3.2.6 vector���ݴ�ȡ
��������;
����vector�е����ݵĴ�ȡ����
����ԭ��:
at(int idx);	//��������idx��ָ������
operator[]:		//��������idx��ָ������
front();		//���������е�һ������Ԫ��
back();		    //�������������һ������Ԫ��

*/

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v) {
	for (vector<int>::iterator it; it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
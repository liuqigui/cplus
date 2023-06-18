/*
3.2.5 vector�����ɾ����������;
����vector�������в��롢ɾ����f��
����ԭ��:
push_back(ele);		//β������Ԫ��ele
pop_back();//ɾ�����һ��Ԫ��
insert(const_iterator pos, ele);	//������ָ��λ��pos����Ԫ��ele
insert(const_iterator pos, int count,ele);	//������ָ��λ��pos����count��Ԫ��ele
erase(const_iterator pos);		//ɾ��������ָ���Ԫ��
erase(const_iterator start, const_iterator end);	//ɾ����������start��end֮���Ԫ��
clear();		//��������������Ԫ��

�ܽ�:
β��--- push_back.
β��--- pop_back
����--- insert(λ�õ�����)
ɾ��--- erase(λ�õ�����)
���--- clear
*/

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	printVector(v1);

	v1.pop_back();
	printVector(v1);
	
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);

	v1.erase(v1.begin());
	printVector(v1);

	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
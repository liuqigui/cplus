/*
3.2.8 vectorԤ���ռ书������:
������vector�ڶ�̬��չ����ʱ����չ����
����ԭ��:
reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�

*/

#include<iostream>
#include<vector>
using namespace std;

void test01() {
	vector<int> v1;
	int num = 0;
	int * p = NULL;

	v1.reserve(100000);

	for (int i = 0; i < 100000; i++) {
		v1.push_back(i);
		if (p != &v1[0]) {
			p = &v1[0];
			num++;
		}
	}
	cout << num << endl;

	cout << v1.capacity() << endl;
	cout << v1.size() << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}
/*
1.3.5��ģ����̳�
����ģ�������̳�ʱ����Ҫע��һ�¼���:
��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
�������ָ�����������޷�����������ڴ�
����������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��

�ܽ�:�����������ģ�壬������Ҫָ����������T����������
*/

#include<iostream>

using namespace std;

template<class T>
class Base
{
	T m;
};

//class Son :public Base	//������һ�������б�,�㲻���̳пռ�Ķ���
class Son :public Base<int>
{

};

void test01()
{
	Son s1;

}

//��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template<class T1, class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1���������ͣ�" << typeid(T1).name() << endl;
		cout << "T2���������ͣ�" << typeid(T2).name() << endl;

	}

	T1 obj;
};

void test02()
{
	Son2<int, char>s2;

}

int main()
{
	test02();

	system("pause");
	return 0;
}
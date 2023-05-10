/*
1.3.9��ģ�尸��
��������:ʵ��һ��ͨ�õ������࣬Ҫ������:
�����Զ��������������Լ��Զ����������͵����ݽ��д洢
���������е����ݴ洢������
�����캯���п��Դ������������
���ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
���ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
������ͨ���±�ķ�ʽ���������е�Ԫ��
�����Ի�ȡ�����е�ǰԪ�ظ��������������


�ܽ�:
�ܹ�������ѧ֪ʶ��ʵ��ͨ�õ�����
*/

#include<iostream>
#include"MyArray.hpp"
#include<string>

using namespace std;

void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;
	}
}

void test01() {
	MyArray <int>arr1(5);

	/*MyArray <int>arr2(arr1);

	MyArray <int>arr3(100);
	arr3 = arr1;*/

	for (int i = 0; i < 5; i++) {
		//����β�巢�������в�������
		arr1.Push_Back(i);
	}

	cout << "arr1�Ĵ�ӡ���λ��" << endl;
	printIntArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray <int>arr2(arr1);

	cout << "arr2βɾ��" << endl;
	arr2.Pop_Back();

	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
}



//�����Զ�����������
class Person
{
public:
	Person() {};
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

//��ӡ���
void printPersonArray(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << "������" << arr[i].m_Name << " ���䣺" << arr[i].m_Age << endl;
	}
}

void test02() {
	MyArray<Person> arr(10);

	Person p1("swk", 999);
	Person p2("hx", 20);
	Person p3("zy", 1234);
	Person p4("lqg", 30);
	Person p5("jln", 18);

	//�����ݲ����ȥ
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ���
	printPersonArray(arr);

	cout << "arr1������Ϊ��" << arr.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr.getSize() << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
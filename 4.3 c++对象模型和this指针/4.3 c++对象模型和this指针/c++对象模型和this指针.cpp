/*
4.3 C++����ģ�ͺ�thisָ��
4.3.1��Ա�����ͳ�Ա�����ֿ��洢
��C++��,���ڵĻ�Ա�����ͳ�Ա���̷ֿ��洢
ֻ�зǾ�̬��Ա������������Ķ�����

4.3.2 thisָ�����
ͨ��4.3.1����֪����C++�г�Ա���Ǻͳ�Ա�����Ƿֿ��洢��
ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ�����
��ô������:��һ���������������Ǹ���������Լ�����?��

C++ͨ���ṩ����Ķ���ָ��, thisָ�룬����������⡣
thisָ��ָ�򱻵��õĳ�Ա���������Ķ���

thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

thisָ�����;:
�����βκͳ�Ա����ͬ��ʱ������thisָ��������
������ķǾ�̬��Ա�����з��ض�������ʹ��return *this

4.3.3��ָ����ʳ�Ա����
C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��

4.3.4 const���γ�Ա����
������:
����Ա�������const�����ǳ�Ϊ�������Ϊ������
���������ڲ������޸Ļ�Ա����
����Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
������:
����������ǰ��const�Ƹö���Ϊ������
��������ֻ�ܵ��ó�����

*/

#include<iostream>

using namespace std;

//��Ա���� �� ��Ա���� �ֿ��洢
class Person {
	int m_A;	//�Ǿ�̬��Ա����	������Ķ�����

	static int m_B;		//��̬��Ա����	��������Ķ�����

	void func() {	//�Ǿ�̬��Ա����	��������Ķ�����

	}

	static void func2() {	//��̬��Ա����	��������Ķ�����

	}
};

void test01() {
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;	//1
}

void test02() {
	Person p;
	cout << "size of p = " << sizeof(p) << endl;	//4 int

}

//4.3.2 thisָ�����

class Person1 {
public:
	Person1(int age) {
		this->age = age;	//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
	}

	Person1& PersonAddAge(Person1 &p) {
		this->age += p.age;

		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}

	int age;
};

//1.������Ƴ�ͻ
void test03() {
	Person1 p(18);
	cout << p.age << endl;
}

//2.���ض�������*this
void test04() {
	Person1 p1(10);

	Person1 p2(10);

	p2.PersonAddAge(p1);
	//��ʽ���˼�� cout << ...
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p1������Ϊ��" << p1.age << endl;
	cout << "p2������Ϊ��" << p2.age << endl;
}

//4.3.3��ָ����ʳ�Ա����
//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
class Person2 {
public:
	void showClassName() {
		cout << "this is Person2 class" << endl;
	}

	void showPersonAge() {

		//thisΪNULL��ϵͳ����ˣ���һ��if��䣬��ǿ���뽡׳��
		if (this == NULL) {
			return;
		}

		//cout << "age = " << this->m_Age << endl;	//���������ָ��Ϊ�գ�Ĭ�ϣ�
		cout << "age = " << m_Age << endl;
	}

	int m_Age;
};

void test05() {
	Person2 *p = NULL;

	p->showClassName();	//û��

	p->showPersonAge();
}

//4.3.4 const���γ�Ա����
//������ :
//����Ա�������const�����ǳ�Ϊ�������Ϊ������
//���������ڲ������޸Ļ�Ա����
//����Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
//������ :
//����������ǰ��const�Ƹö���Ϊ������
//��������ֻ�ܵ��ó�����
class Person3 {
public:
	//thisָ�뱾����ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//const Person3 * const this;
	void showPerson3() const{	//������	
		//this->m_A = 100;	//����
		m_B = 199;
		cout << "������" << endl;
	}

	void func() {
		cout << "����" << endl;
		m_A = 199l;
	}

	int m_A;
	mutable int m_B;	//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
};

void test06() {
	const Person3 p;	//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;	//����������Ҳ�������޸�
	p.m_B = 103;	//mutable���ε�m_B��������Ҳ�����޸�

	//������ֻ���Ե��ó�����
	p.showPerson3();
	//p.func();	//���� �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸����ԡ�
}

int main() {
	cout << "4.3.1��Ա�����ͳ�Ա�����ֿ��洢" << endl;
	//test01();
	//test02();

	cout << "4.3.2 thisָ�����" << endl;
	//test03();
	//test04();

	cout << "4.3.3��ָ����ʳ�Ա����" << endl;
	//test05();

	cout << "4.3.4 const���γ�Ա����" << endl;


	system("pause");
	return 0;
}
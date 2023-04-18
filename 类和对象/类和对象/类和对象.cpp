/*
4 ��Ͷ���
C++����������������Ϊ:��װ���̳С���̬
C++��Ϊ�������ﶼ��Ϊ���󣬶������������Ժ���Ϊ
����:
�˿�����Ϊ�������������������䡢��ߡ�����.....��Ϊ���ߡ��ܡ������Է�������....��Ҳ������Ϊ������������̥�������̡�����....��Ϊ�����ˡ������֡��ſյ�...
������ͬ���ʵĶ������ǿ��Գ����Ϊ�࣬���������࣬�����ڳ���

4.1 ��װ
4.1.1 ��װ������
��װ��c++���������������֮һ
��װ�����壺
	�����Ժ���Ϊ��Ϊһ�����壬���������е�����
	�����Ժ���Ϊ����Ȩ�޿���

	��װ������һ��
		��������ʱ�����Ժ���Ϊд��һ�𣬱�������
		�﷨��class ����{	����Ȩ�ޣ�����		/��Ϊ}��
	��װ�����:
		�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ��Ʒ���Ȩ��������: 
			1. public����Ȩ��		��Ա�����ڿ��Է��� ����Ҳ���Է���
			2. protected����Ȩ��	��Ա�����ڿ��Է��� ���ⲻ���Է��� ����Ҳ���Է��ʸ����б���������
			3. private˽��Ȩ��		��Ա�����ڿ��Է��� ���ⲻ���Է��� ���಻���Է��ʸ����б���������
4.1.2 struct��class����
	��C++��struct��classΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ����:
	- structĬ��Ȩ��Ϊ����
	- classĬ��Ȩ��Ϊ˽��
4.1.3 ��Ա��������Ϊ˽��
	�ŵ�1�ý����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
	�ŵ�2:����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/
#include<iostream>
#include<string>

using namespace std;

const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ:2 * PI * �뾶
class Circle {
	//����Ȩ��
public:
	//���� ����
	int m_r;	//�뾶
	
	//��Ϊ ���� ��ȡԲ���ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}
};

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student {
	//����Ȩ��
public:
	//���е����Ժ���Ϊ ͳһ��Ϊ ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����

	string m_Name;
	int m_Id;

	void showStudent() {
		cout << "������" << m_Name << "\t ѧ�ţ�" << m_Id << endl;
	}

	//�Լ�д
	//void prinfShow() {
	//	cout << "name:" << m_Name << endl;
	//	cout << "Id;" << m_Id << endl;
	//}

	//��������ֵ
	void setName(string name) {
		m_Name = name;
	}

	//��ѧ�Ÿ�ֵ
	void setId(int id) {
		m_Id = id;
	}
};

class Person {
public:
	//����Ȩ��
	string m_Name;

protected:
	string m_Car;

private:
	int m_Password;
	
public:
	void func() {
		m_Name = "����";
		m_Car = "����";
		m_Password = 123456;
	}

};

class C1 {
	int m_A;	//Ĭ��˽��
};

struct C2
{
	int m_A;	//Ĭ�Ϲ���
};

class Person1 {
public:
	//��������
	void setName(string name) {	
		m_Name = name;
	}

	//��ȡ����
	string getName() {
		return m_Name;
	}

	//��ȡ����
	int getAge() {
		//m_Age = 18;
		return m_Age;
	}
	//����Ϊ0-150֮��
	void setAge(int age) {
		if (age < 0 || age >150) {
			cout << "������������" << endl;
			return;
		}
		else {
			m_Age = age;
		}
	}

	//����	ֻд
	void setLover(string lover) {
		m_Lover = lover;
	}

private:
	//����	�ɶ���д
	string m_Name;

	//����	ֻ��
	int m_Age;

	//����	
	string m_Lover;
};

int main() {

	//ͨ��Բ�� ���������Բ
	Circle c1;	//ʵ������ͨ��һ���� ����һ������Ĺ���
	//��Բ��������ԣ��뾶�����и�ֵ
	c1.m_r = 10;

	cout << "����ܳ���" << c1.calculateZC() << endl;

	Student s1;
	s1.m_Name = "�����";
	s1.m_Id = 202420049;

	cout << "show:" << endl;
	//s1.prinfShow();
	s1.showStudent();

	Student s2;
	s2.m_Name = "����";
	s2.m_Id = 2;
	s2.showStudent();

	Student s3;
	s3.setName("�Ŵ�");
	s3.setId(21);
	s3.showStudent();

	Person p1;
	p1.m_Name = "����";
	//p1.m_Car = "������";	//����Ȩ�����ݲ����Է���
	//p1.m_Password = 123321;	//˽��Ȩ�����ݲ����Է���

	cout << "4.1.2 struct��class����" << endl;
	C1 c2;
	//c2.m_A = 100;	//�����Է��ʣ�Ĭ��˽��
	C2 c3;
	c3.m_A = 100;	//�����Է��ʣ�Ĭ�Ϲ���
	cout << "struct:" << c3.m_A << endl;

	cout << "4.1.3 struct��class����" << endl;
	Person1 p;
	p.setName("�Ŵ�");
	cout << "����Ϊ��" << p.getName() << endl;
	p.setAge(13);
	cout << "����Ϊ��" << p.getAge() << endl;
	p.setLover("С��");


	system("pause");
	return 0;
}
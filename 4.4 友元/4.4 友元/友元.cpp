/*
4.4��Ԫ
��������ļ��п���(Public)�����������(Private)
�����������Ŀ��˶����Խ�ȥ���������������˽�е�,Ҳ����˵ֻ�����ܽ�ȥ�����أ���Ҳ����������ĺù��ۺû��ѽ�ȥ��
�ڳ������Щ˽������Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
��Ԫ��Ŀ�ľ�����һ�����������������һ������˽�г�Ա
��Ԫ�Ĺؼ���Ϊ	friend
��Ԫ������ʵ��
��ȫ�ֺ�������Ԫ
��������Ԫ
����Ա��������Ԫ

*/

#include<iostream>
#include<string>

using namespace std;

//��������
class Building {

	//goodGayȫ�ֺ�����Building�����ѣ����Է���Building��˽�г�Ա
	friend void goodGay(Building &building);

public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;	//����

private:
	string m_BedRoom;
};

//ȫ�ֺ���
void goodGay(Building &building) {
	cout << "�û��ѵ�ȫ�ֺ��������ڷ��ʣ�" << building.m_SittingRoom << endl;

	cout << "�û��ѵ�ȫ�ֺ��������ڷ��ʣ�" << building.m_BedRoom << endl;

}

void test01() {
	Building b;
	goodGay(b);
}

//������Ԫ
class Building1;

class GoodGay {
public:
	GoodGay();
	void visit();	//�ιۺ��� ����Building�е�����
	Building1 * building;
};

class Building1 {
	//GoodGay���Ǳ���ĺ����ѣ����Է��ʱ����˽�г�Ա
	friend class GoodGay;

public:
	Building1();

public:
	string m_SittingRoom;	//����
private:
	string m_BedRoom;
};

//����д��Ա���캯��
Building1::Building1() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay() {
	//�������������
	building = new Building1;
}

void GoodGay::visit() {
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;

}

void test02() {
	GoodGay gg;
	gg.visit();
}

//��Ա��������Ԫ
class Building2;
class GoodGay2 {
public:
	GoodGay2();

	void visit();	//��visit�������Է���Building2��˽�г�Ա
	void visit2();	//��visit2���������Է���Building2��˽�г�Ա

	Building2 * building2;
};

class Building2 {
	friend void GoodGay2::visit();

public:
	Building2();

public:
	string m_SittingRoom;	//����

private:
	string m_BedRoom;	//����
};

Building2::Building2() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay2::GoodGay2() {
	building2 = new Building2;
}

void GoodGay2::visit() {
	cout << "�û��������ڷ��ʣ�" << building2->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building2->m_BedRoom << endl;

}

void GoodGay2::visit2() {
	cout << "�û��������ڷ��ʣ�" << building2->m_SittingRoom << endl;
	//cout << "�û��������ڷ��ʣ�" << building2->m_BedRoom << endl;

}

void test03() {
	GoodGay2 gg;
	gg.visit();
	gg.visit2();
}

int main() {

	cout << "4.4��Ԫ" << endl;
	//test01();

	cout << "������Ԫ" << endl;
	//test02();

	cout << "��Ա��������Ԫ" << endl;
	test03();


	system("pause");
	return 0;
}
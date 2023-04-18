/*
��ϰ����1:�����������
�����������(Cube)
������������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
*/

#include<iostream>

using namespace std;

class Cube {
public:
	//���ó�
	void set_L(int l) {
		m_L = l;
	}

	//��ȡ��
	int get_L() {
		return m_L;
	}

	//���ÿ�
	void set_W(int w) {
		m_W = w;
	}

	//��ȡ��
	int get_W() {
		return m_W;
	}

	//���ø�
	void set_H(int h) {
		m_H = h;
	}

	//��ȡ��
	int get_H() {
		return m_H;
	}

	//��ȡ���
	int calculateS() {
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	//��ȡ���
	int calculateV() {
		return m_L * m_W * m_H;
	}

	//����ȫ�ֺ����ж������������Ƿ����
	bool isSameByClass(Cube &c) {
		if (m_L == c.get_L() && m_W == c.get_W() && m_H == c.get_H()) {
			return 1;
		}
		else {
			return 0;
		}

	}
private :
	int m_L;	//��
	int m_W;	//��
	int m_H;	//��
};

//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube &c1, Cube &c2) {
	if (c1.get_L() == c2.get_L() && c1.get_W() == c2.get_W() && c1.get_H() == c2.get_H()) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {

	Cube c1;
	c1.set_L(10);
	c1.set_W(10);
	c1.set_H(10);

	cout << "c1�������" << c1.calculateS() << endl;
	cout << "c1�������" << c1.calculateV() << endl;

	Cube  c2;
	c2.set_L(10);
	c2.set_W(10);
	c2.set_H(10);

	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1��c2����ȵģ�" << endl;
	}
	else {
		cout << "c1��c2������ȵģ�" << endl;
	}

	bool  ret1 = c1.isSameByClass(c2);
	if (ret1) {
		cout << "���ں���c1��c2����ȵģ�" << endl;
	}
	else {
		cout << "���ں���c1��c2������ȵģ�" << endl;
	}

	system("pause");
	return 0;
}
/*
���Բ�Ĺ�ϵ
�㵽Բ�ĵľ��� == �뾶 ����Բ��
�㵽Բ�ĵľ��� >  �뾶 ����Բ��
�㵽Բ�ĵľ��� <  �뾶 ����Բ��
�㵽Բ�ĵľ��� == 0   ����Բ��


*/

#include<iostream>
#include "point.h"
#include "circle.h"

using namespace std;

//����
//class Point {
//public:
//	void setX(int i) {
//		x = i;
//	}
//
//	int getX() {
//		return x;
//	}
//
//	void setY(int i) {
//		y = i;
//	}
//
//	int getY() {
//		return y;
//	}
//
//private:
//	int x;
//	int y;
//};

////Բ��
//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//
//	int getR() {
//		return m_R;
//	}
//
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//
//private:
//	int m_R;	//�뾶
//
//	Point m_Center;		//Բ��
//};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c, Point &p) {
	//������������ƽ��
	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());

	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	if (distance > rDistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance == rDistance) {
		cout << "����Բ��" << endl;

	}
	else {
		cout << "����Բ��" << endl;

	}
}

int main() {
	Circle c;
	c.setR(10);
	Point center;
	center.setX(0);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(6);
	p.setY(8);

	isInCircle(c, p);

	Circle c1;
	c1.setR(10);
	Point center1;
	center1.setX(0);
	center1.setY(0);
	c1.setCenter(center1);

	Point p1;
	p1.setX(46);
	p1.setY(8);

	isInCircle(c1, p1);


	system("pause");
	return 0;
}
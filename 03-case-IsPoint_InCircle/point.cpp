#include"point.h"
#include<iostream>
using namespace std;

point::point()
{
	cout << "point��Ĭ�Ϲ��캯��" << endl;
}

//�ó�ʼ�б�or���캯����ʼ��  ���򵥣�
//point::point(int x, int y) :m_x(x), m_y(y)
//{}
point::point(int x, int y)
{
	/*m_x = x;
	m_y = y;*/
	cout << "point���вι��캯��" << endl;
}

point::point(const point& p)
{
	cout << "point�Ŀ���" << endl;
	this->m_x = p.m_x;
	this->m_y = p.m_y;
}

void point::setX(int x1)//����x����,��������������ʵ���ڶ�Ӧ.cpp�ļ��б�д
{
	m_x = x1;
}

void point::setY(int y1)//����y����
{
	m_y = y1;
}

int point::getX()
{
	return m_x;
}
int point::getY()
{
	return m_y;
}

point::~point()
{
	cout << "point����������" << endl;
}
#include<iostream>
#include"circle.h"
using namespace std;

//���ù��캯�����ó�ʼ���б�����Ը�ֵ
//��point�и�ÿ�����Ա�д������ֵ������
circle::circle(int r, point p) :m_r(r), center(p)
{
	cout << "circle���вι��캯��" << endl;
}
//�ȼ���
//circle::circle(int r, point p)
//{
//	m_r = r;
//	center = p;
//}

point circle::getCenter()
{
	return center;
}
int circle::getR()
{
	return m_r;
}
//������ĳ�Ա�����жϵ���Բ��ϵ��������circle���ڣ�����贫��point�������Ƚϣ���һ������
void circle::PointWithCircleByClass(point& p)
{
	//��ȡ�����ƽ��
	int distance = (center.getX() - p.getX()) * (center.getX() - p.getX()) + (center.getY() - p.getY()) * (center.getY() - p.getY());
	int r = m_r * m_r;
	if (r == distance)
	{
		cout << "����Ԫ��" << endl;
		return;
	}
	else if (r > distance)
	{
		cout << "����Ԫ��" << endl;
		return;
	}
	cout << "����Ԫ��" << endl;

}

circle::~circle()
{
	cout << "circle����������" << endl;
}


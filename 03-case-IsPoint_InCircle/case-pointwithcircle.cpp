#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"//���ļ���д����Ҫ��.h��������.cpp��ʵ��

//ȫ�ֺ����жϵ���Բ�Ĺ�ϵ,����ʹ�����ô��ݶ�����ֵ����(circle c, point p)��
//���Լ���һ�ݿ�������ֵ�������¿����ڴ�ռ佫ֵ���룬���������
void PointWithCircle(circle& c, point& p)
{
	//��ȡ�����ƽ��
	//c �� һ��Բcircle�ࣻc.getCenter() �� һ����point�ࣻc.getCenter().getX() �õ��˵��x/y����
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int r = (c.getR()) * (c.getR());
	if (r == distance)
	{
		cout << "����yuan��" << endl;
		return;//ע��return����ӣ���ֹ������ִ�����˳��ִ����һ���������
	}
	else if (r > distance)
	{
		cout << "����yuan��" << endl;
		return;
	}
	cout << "����yuan��" << endl;
}

void test01()
{
	point p1;
	point center1;
	p1.setY(5);
	p1.setX(5);
	center1.setX(5);
	center1.setY(0);
	circle c1(5, center1);//���캯��/��ʼ���б�ĵ��ã���ʵ�������ͬʱ�����ø�ʽ������ �����������캯�������б��ʽ������
	//���ó�Ա�����ж�
	//c1.PointWithCircleByClass(p1);
	//����ȫ�ֺ���
	PointWithCircle(c1, p1);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#pragma once


class point
{
public:
	point();
	~point();
	point(int x, int y);
	point(const point& p);

	void setX(int x1);//����x����,��������������ʵ���ڶ�Ӧ.cpp�ļ��б�д
	void setY(int y1);//����y����
	int getX();//X����
	int getY();//y����


private:
	int m_x;//��x����
	int m_y;//��y����
};
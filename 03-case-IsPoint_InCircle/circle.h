#pragma once
#include"point.h"

class circle
{
public:
	circle();//Ĭ�Ϲ��캯��������
	circle(int r, point p);//�вι��캯��������
	circle(const circle& c);//�������캯��������
	~circle();//��������

	point getCenter();
	/*{
		return center;
	}*/
	int getR();
	/*{
		return m_r;
	}*/
	//������ĳ�Ա�����жϵ���Բ��ϵ
	void PointWithCircleByClass(point& p);
private:
	point center;
	int m_r;


};

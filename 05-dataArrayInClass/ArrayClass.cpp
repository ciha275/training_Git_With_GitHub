#include<iostream>
using namespace std;
#include"MyArray.h"

void test01()
{
	//�����ڶ�����������
	//MyArray *a2 = new MyArray(30);
	//MyArray *a3 = new MyArray(*a2);

	MyArray a2(30);
	//MyArray a3(a2);
	//��a3����a2�����Ķ��У����ڴ˴���
	//a2��δ����ֵ����a3������������Ϊ���룬a2�ں��渳ֵ��Ҳ��a3�޹���

	for (int i = 0; i < 10; ++i)
	{
		a2.pushback(i);		//Ҫ��pushback()����һλλ�ĳ�ʼ����ѹ�룬��setData()�����Сm_Sizeû�б仯,a3����a2ʱ�����i<m_Sizeд�����ݣ����a3������
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << (a2)[i] << endl;//��Ϊ������[]����������������
	}
	cout << "a2 size = " << a2.showSize() << "; a2 capacity = " << a2.showCapacity() << endl;
	cout << "a2 first = " << (a2)[0] << "; a2 last = " << (a2)[9] << endl;
	
	MyArray a3(a2);
	cout << "a3 size = " << a3.showSize() << "; a3 capacity = " << a3.showCapacity() << endl;
	cout << "a3 first = " << (a3)[0] << "; a3 last = " << (a3)[9] << endl;
}

int main()
{
	test01();
}
#pragma once


class MyArray
{
public:
	MyArray();//Ĭ�Ϲ��죬�ɳ�ʼ������������ѡ��Ĭ��200
	MyArray(int a);//�вι��죬��ѡ���Ե�������������
	MyArray(const MyArray& myarray);//�������죬�ܸ���һ����������
	~MyArray();//Ҫ���ö�����ռ���ͷ�

	//��ʾ��С
	int showSize();
	//��ʾ����
	int showCapacity();

	//β�巨������һ��������β��
	void pushback(int index);

	//����������������
	void setData(int i, int index);

	//����[]������һ������һ��ʹ�ã��磬���array[i],array[i]=x 
	int& operator[](int index);//��������ʹ�ü�������ֵ��Ҳ����ֵ

private:
	//һ������Ӧ����һЩ���ԣ�����������������С��ʵ��װ�˶��٣�����������λ�ã�һ��ָ��ָ�����飩
	int* pAdress;//ָ�������洢���ݵ�ָ��
	int m_Capacity;//��������
	int m_Size;//�����С

};
#include<iostream>
using namespace std;

class Base1//����
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

///////////////////////////////////���м̳�public///////////////////////
class Son1 : public Base1
{
public:
	void func()
	{
		cout << m_A << endl;//�����й��е����ԣ��ɼ̳У�	����public��		�����ܷ���
		cout << m_B << endl;//�����б��������ԣ��ɼ̳У�	����protected��	���ⲻ�ܷ���
	  //cout << m_C << endl;//������˽�е����ԣ����ɼ̳�
	}
};
void MyFunc1()
{
	Son1 s1;
	s1.m_A;//����public�����������
  //s1.m_B;//����protected�������ⲻ�ܷ���
}

///////////////////////////////////�����̳�protected///////////////////////
class Son2 : protected Base1
{
public:
	void func()
	{
		cout << m_A << endl;//�����й��е����ԣ��ɼ̳У�	��Ϊprotected��	���ⲻ�ܷ���
		cout << m_B << endl;//�����б��������ԣ��ɼ̳У�	����protected��	���ⲻ�ܷ���
	  //cout << m_C << endl;//������˽�е����ԣ����ɼ̳�
	}
};
void MyFunc2()
{
	Son2 s2;
  //s2.m_A;//��Ϊprotected�������ⲻ�ܷ���
  //s1.m_B;//����protected�������ⲻ�ܷ���
}

///////////////////////////////////˽�м̳�private///////////////////////
class Son3 : private Base1
{
public:
	void func()
	{
		cout << m_A << endl;//�����й��е����ԣ��ɼ̳У�	��Ϊprivate��	���ⲻ�ܷ���
		cout << m_B << endl;//�����б��������ԣ��ɼ̳У�	��Ϊprivate��	���ⲻ�ܷ���
	  //cout << m_C << endl;//������˽�е����ԣ����ɼ̳�
	}
};

class GrandSon : public Son3
{
	//��ΪSon3˽�м̳к��������Զ���˽���ˣ�����GrandSonɶҲ�̳в���
	//cout << m_A << endl;
};

/////////////////////////////////////�̳��еĶ���ģ��///////////////////////
//�鿴�����С
void test01()
{
	//��ȻSon3ȫ��private��GrandSonɶҲû�̳�
	//ʵ���ϣ������̳и����˽�г�Ա��ֻ�Ǳ�����������ˣ����ʲ���˽�г�Ա
	cout << "����ʵ���еĴ�С ��" << sizeof(GrandSon) << endl;
}

int main()
{
	test01();
	
}

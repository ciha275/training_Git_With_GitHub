#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		//m_Age = 100;//��ò��ڹ��캯������
	}
	static int m_Age;//��̬��Ա�������������ݣ���ͬ��������ݶ���ͬ
	//��̬��Ա����ֻ���������������ⶨ��
	int m_nonsta;

	//��̬��Ա����
	static void func1()
	{
		//m_nonsta = 10;��̬�������ɵ�����ͨ����
		cout << "use of func1" << endl;
	}
	//��ͨ�����ȿ��Ե��þ�̬����Ҳ�ɵ�����ͨ����
	void nomal_func(int jingtai, int putong)
	{
		m_Age = jingtai;
		m_nonsta = putong;
	}
private:
	//��̬��Ա����Ҳ����Ȩ��
	static int m_priv;
	//��̬��Ա����Ҳ����Ȩ��
	static void func2()
	{
		cout << "use of func2" << endl;
	}

};
int Person::m_Age = 0;//����Ķ��壬��ʼ��
int Person::m_priv = 10;


void test01()
{
	//1.ͨ���������ԣ�p.m_Age�����ʾ�̬����
	Person p1;
	p1.m_Age = 1;
	Person p2;
	p2.m_Age = 2;
	//2.ͨ���������ʾ�̬������Person::m_Age��
	cout << "m_Age = " << Person::m_Age << endl;
	//���Ƽ�ʹ�ù��캯�����徲̬����ԭ�򼴣���ֱ�����������ʣ��޴���������һ����������ù��캯�������Ӧ��̬����û�г�ʼ��
	cout << "m_Age = " << p1.m_Age << endl;
	cout << "m_Age = " << p2.m_Age << endl;
	//��ӡ�����Ϊ2��˵���˾�̬�����Ĺ�������

	//p1.m_A = 35;		���о�����
	//Person::m_A = 46;	˵����̬����Ҳ����Ȩ�޿��Ƶ�

	//��̬��Ա����Ҳ��ͨ������or��������
	p1.func1();
	p2.func1();
	Person::func1();//��ʾ���Ρ�use of func1��

	//p1.func2();		private�е�func2
	//Person::func2();	ͬ���޷����ʣ��ɼ���̬����ͬ����Ȩ�޿���

	//��ͨ�������þ�̬����ͨ����
	p2.nomal_func(58, 36);
	cout << "m_nonsta = " << p2.m_nonsta << endl;
	cout << "m_Age = " << Person::m_Age << endl;
	cout << "m_Age = " << p1.m_Age << endl;
	cout << "m_Age = " << p2.m_Age << endl;
}

int main()
{
	test01();
}


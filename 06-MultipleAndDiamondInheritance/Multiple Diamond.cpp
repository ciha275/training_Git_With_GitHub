#include<iostream>
using namespace std;

////////////////////////////////��̳�////////////////////////////////

class Base1
{
public:
	Base1()
	{
		this->m_A = 10;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		this->m_A = 20;
	}
	int m_A;
};

class Son1 : public Base1, public Base2//��̳е�д�� 
{
public:
	int m_C;
	int m_D;
};

void test01()
{
	cout << sizeof(Son1) << endl;//��С16���ɼ���4��int����Base1 2���̳���

	//��̳У���������ͬ�����ԣ����¶�����
	Son1 s1;
	//s1.m_A;//�����ԣ��޷�ֱ�ӷ���
	cout << s1.Base1::m_A << endl;
	cout << s1.Base2::m_A << endl;
}

////////////////////////////////���μ̳�////////////////////////////////

class DiamondBase
{
public:
	int m_A;
};

class DiamondSon1 : public DiamondBase
{
	
};
class DiamondSon2 : public DiamondBase
{

};

class DiamondGrandson : public DiamondSon1, public DiamondSon2
{

};

void test02()
{
	DiamondGrandson Gs;
	//Gs.m_A;//��ʱgrandson�ͻ�̳�son1�︸���m_A��Ҳ�̳�son2���m_A�����¶�����
}

//ʹ������������μ̳е�����
class DiamondSon1V : virtual public DiamondBase
{

};
class DiamondSon2V : virtual public DiamondBase
{

};

class DiamondGrandsonV : public DiamondSon1V, public DiamondSon2V
{

};

void test03()
{
	DiamondGrandsonV GsV;
	GsV.m_A;//��ʱ�ɷ�����
	//��������࣬��������һ�ݹ��������
	GsV.DiamondSon1V::m_A = 10;
	GsV.DiamondSon2V::m_A = 20;

	cout << GsV.DiamondSon1V::m_A << endl;
	cout << GsV.DiamondSon2V::m_A << endl;
	cout << GsV.m_A << endl;
	//�ɼ������Ϊ20����Ϊ������������son1V��son2V���������ָ��vbptr��ͨ����ͬ��ƫ�������ҵ�ͬһ��m_A
}

int main()
{
	//test01();
	test03();
}

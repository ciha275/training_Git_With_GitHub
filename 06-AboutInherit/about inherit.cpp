#include<iostream>
using namespace std;

class Base1//����
{
public:
	Base1()
	{
		m_A = 10;
		cout << "Base1��Ĭ�Ϲ���" << endl;
	}
	~Base1()
	{
		cout << "Base1����������" << endl;
	}

	int m_A;

protected:
	int m_B;
private:
	int m_C;
};

//�����̳и���ĳ�Ա��������Ա����
//���ǣ����಻��̳и���Ĺ��졢��������
//ֻ�и���֪���Լ��Ĺ��������

class Son1 : public Base1
{
public:
	Son1()
	{
		cout << "son1��Ĭ�Ϲ���" << endl;
	}
	~Son1()
	{
		cout << "son1������" << endl;
	}
};

void test01()
{
	Base1 b1;
	Son1 s1;//�ɼ���������ʱ���ȵ��ø���
}

//���ڸ����вι��죬�����������ó�ʼ���б�ʽ����ʽ�ص��ø����вι���
class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
		cout << "�вι��캯��" << endl;
	}
	
	int m_A;
};

class Son2 : public Base2
{
public:
	Son2(int a) : Base2(a)
	{}
};

void test02()
{
	Son2 s2(35);
}

/////////////////////////////����ͬ�����������ԵĴ���/////////////////////////
class Base3
{
public:
	Base3()
	{
		cout << "Base3��Ĭ�Ϲ���" << endl;
		this->m_S = 123;
	}
	void func()
	{
		cout << "Base3��func" << endl;
	}
	void func(int a)
	{
		cout << "Base3���в�func" << endl;
	}

	int m_S;
};

class Son3 : public Base3
{
public:
	Son3()
	{
		cout << "Son3��Ĭ�Ϲ���" << endl;
		this->m_S = 111;
	}
	void func()
	{
		cout << "Son3��func" << endl;
	}

	int m_S;
};

//�������������ͬ������m_S
void test03()
{
	Son3 s3;
	cout << s3.m_S << endl;//Ĭ�Ͼͽ�ԭ�򣬹ʵ��������m_S
	//��::ȷ�������������ø����m_S
	cout << s3.Base3::m_S << endl;

	//��Ա����ͬ��
	s3.func();
	s3.Base3::func();

	//���Ӳ���Ҳ����ֱ���ҵ�������в�func��
	//��ͬ����ͽ�ԭ���ǰѸ���ͬ���İ汾�������ˣ������в�
	//��Ҫ���ø���ı���������

	//s3.func(1);
	s3.Base3::func(1);
}


/////////////////////////////////��̬��Ա�Ĵ���///////////////////
//��ʵ�ͺ���ͨ��Ա����������һ��
class Base4
{
public:
	static void func()
	{
		cout << "base4 func" << endl;
	}
	static void func(int a)
	{
		cout << "base4 func(int)" << endl;
	}
	static int m_A;
};
int Base4::m_A = 10;//��̬��Ա�����ⶨ��

class Son4 : public Base4
{
public:
	static void func()
	{
		cout << "son4 func" << endl;
	}
	
	static int m_A;
};
int Son4::m_A = 11;//��̬��Ա�����ⶨ��

//��̬��Ա������ɼ̳�
void test04()
{
	cout << Son4::m_A << endl;//���ʾ�̬��Ա������+::
	//���ʸ���ͬ��
	cout << Son4::Base4::m_A << endl;

	Son4::func();
	Son4::Base4::func(1);
}

int main()
{
	test01();
	test02();
	test03();
	test04();
}

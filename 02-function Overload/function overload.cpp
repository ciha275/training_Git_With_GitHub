#include<iostream>
using namespace std;

//��������  ��������
//����������ͬ����ͬһ����������
//����������  ������ͬ�����Ͳ�ͬ������˳��ͬ
void func()
{
	cout << "�޲�����func()" << endl;
}
void func(int a)
{
	cout << "�в�����func(int a)" << endl;
}
void func(double a)
{
	cout << "�в�����func(double a)" << endl;
}
void func(int a, double b)
{
	cout << "�в�����func(int a, double b)" << endl;
}
void func(double a, int b)
{
	cout << "�в�����func(double a, int b)" << endl;
}

//����ֵ��������Ϊ��������������ú���ʱ���ܲ����÷���ֵ
//�ɼ��˶α����
//int func(double a, int b)
//{
//	cout << "�в�����func(double a, int b)" << endl;
//}

void test01()
{
	func();
	func(1);
	func(1.1);
	func(1, 2.2);
	func(2.2, 1);
}

//�������Ϻ���Ĭ�ϲ�����Ҫע�������
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10)" << endl;
}
void func2(int a)
{
	cout << "func2(int a)" << endl;
}
void test02()
{
	//func2(15);//�����ж��func2ʵ��������б�ƥ��
}

//���õ�����
void func3(int& a)
{
	cout << "&a" << endl;
}
void func3(const int& a)
{
	cout << "const &a" << endl;//const ��������ڴ�ռ䣬ʵ��Ϊ int temp = 10, const int& a = temp
}
void test03()
{
	//int a = 10;	//���˿�
	//func3(a);		//������
	func3(10); //�˶λ��ӡ��const &a��
}

int main()
{
	//test01();
	test03();
}



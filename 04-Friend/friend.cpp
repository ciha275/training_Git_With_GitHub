#include<iostream>
#include<string>
using namespace std;

//��Ԫ,һ�������Ԫ�����ܷ���������private
//�ࡢ��������ĳ�Ա������������Ԫ
																			//������ƪ�г��ֵġ�ʹ����δ�������͡������⣬https://blog.csdn.net/chuomei5332/article/details/109675366
																			//���� ��::���� ʱ����֤��ǰ������༰�亯��������
//class Onlyfunc1;//���������һ���൫û�ж��壬����class Building����Onlyfunc1::func1()ʱ������������ȷ��Onlyfunc1���������û��func1()����

class Building;

//�����е�func1()����Ԫ���˴�ֻ�����ڲ�����������
class Onlyfunc1
{
public:
	Onlyfunc1();
	//{
	//	MybuildingInClass = new Building;	//ͬ�����˴�ʵ������Building��Ĺ��캯�������������ڴ�ǰֻ��Building��һ�����������ڲ���Щ���캯��������δ֪��������
	//}										//�ʣ�Onlyfunc1������еľ��庯��ʵ�֣��漰Building�ڲ���������ģ�����Building�Ķ���֮��ʵ��

	void visitInClass();
	//{
	//	cout << "���visitInClass�ڷ��� " << MybuildingInClass->sittingRoom << endl;
	//	//cout << "���visitInClass�ڷ��� " << MybuildingInClass->bedRoom << endl;�����н���func1��Ϊ��Ԫ���ʴ��в��ɷ���
	//}
	void func1();
	/*{
		cout << "���func1�ڷ��� " << MybuildingInClass->sittingRoom << endl;
		cout << "���func1�ڷ��� " << MybuildingInClass->bedRoom << endl;
	}*/

	Building* MybuildingInClass;
};



class Building
{
	friend void visitQUAN(Building& b1);	//ȫ������Ԫ
	friend class MyClass;					//����������Ԫ
	friend void Onlyfunc1::func1();	//���г�Ա��������Ԫ

public:
	string sittingRoom = "����";

private:
	string bedRoom = "����";
};

//ȫ�ֺ�������Ԫ
void visitQUAN(Building& b1)
{
	cout << "ȫ���ڷ��� " << b1.sittingRoom << endl;
	cout << "ȫ���ڷ��� " << b1.bedRoom << endl;
}
//����������Ԫ
class MyClass
{
public:
	MyClass()
	{
		MybuildingInClass = new Building;
	}

	void visitInClass()
	{
		cout << "���ڷ��� " << MybuildingInClass->sittingRoom << endl;
		cout << "���ڷ��� " << MybuildingInClass->bedRoom << endl;
	}

	Building* MybuildingInClass;
};

//�����е�func1()����Ԫ,class Onlyfunc1�ĺ�������

	Onlyfunc1::Onlyfunc1()
	{
		MybuildingInClass = new Building;
	}

	void Onlyfunc1::visitInClass()
	{
		cout << "���visitInClass�ڷ��� " << MybuildingInClass->sittingRoom << endl;
		//cout << "���visitInClass�ڷ��� " << MybuildingInClass->bedRoom << endl;�����н���func1��Ϊ��Ԫ���ʴ��в��ɷ���
	}
	void Onlyfunc1::func1()
	{
		cout << "���func1�ڷ��� " << MybuildingInClass->sittingRoom << endl;
		cout << "���func1�ڷ��� " << MybuildingInClass->bedRoom << endl;
	}


void test01()
{
	Building building;
	visitQUAN(building);
	MyClass C1;
	Onlyfunc1 C2;
	C1.visitInClass();
	C2.visitInClass();
	C2.func1();

}

int main()
{
	test01();
}

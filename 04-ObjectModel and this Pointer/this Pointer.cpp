#include<iostream>
using namespace std;

class Person
{
public:
	int var;//�Ǿ�̬��Ա����
	void func() {};//�Ǿ�̬��Ա����,��ʱfuncĬ���и�thisָ�������func(Person* this)
	static int vars;//��̬��Ա����
	static void funcs() {};//��̬��Ա����
	//double vard;
	//ֻ��intʱPerson��sizeΪ4��
	//����double�����ڴ���룬���Դ�ʱ��intҲ��8�ֽڣ���ʱPerson��size��Ϊ16
public:
	Person() {};
	//thisָ����������ͻ
	Person(int age)
	{
		this->age = age;
		//age = age;����age��������Ϊ���Ǵ˺����е�age��
	}
	//һ��ĺ�����ʵ��Ĭ�ϼ���this
	void compare(Person& p)
	{
		if (age == p.age)//ʵ�ʡ�age == p.age�����ǡ�this->age == p.age��
		{
			cout << "same" << endl;
			return;
		}
		cout << "not same" << endl;
	}

	//�������,������ʽ���
	void agePlus(Person& p)
	{
		this->age += p.age;
	}
	//������ӣ�����ʽ���
	Person& agePlusCanLink(Person& p)
	{
		this->age += p.age;
		return *this;//this��ָ�����ָ�룬*this���Ƿ��ر���
		//ͬʱ���ص������ã�����ֵ������ʽ���
	}

	int age;


};

//�ɼ�ֻ�зǾ�̬��Ա���������ڶ�������
//��̬�ı���������������˵�����ǵ������ٵ��������Բ�ͬ������ʵľ�̬�� ������һ����
//�Ǿ�̬��Ա����Ҳ���ڶ�������
void test01()
{
	cout << "size of Person = " << sizeof(Person) << endl;
}

//���ڷǾ�̬��Ա���������ڶ������ϣ���ͬ�������ʱ�����־����롰this��ָ��
void test02()
{
	//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
	Person p1;
	Person p2;
	p1.func();//��������ʵ�����˲��� Person* this�����thisָ��p1
}

void test03()
{
	Person p1(10);
	Person p2(10);
	p1.agePlus(p2);
	//p1.agePlus(p2).agePlus(p2);���б���p1.agePlus()��p1��age������û�з���ֵ
	cout << "p1.age = " << p1.age << endl;
	Person p3(10);
	//ÿ�ζ�������p3�������ʽ���
	p3.agePlusCanLink(p2).agePlusCanLink(p2).agePlusCanLink(p2);
	cout << "p3.age = " << p3.age << endl;
}


int main()
{
	test01();
	test03();
}
#include<iostream>
#include<string>
using namespace std;

//����ģʽ����Ҫ��֤һ����Ķ���Ψһһ��
//��Ĭ�Ϲ��캯������������˽�л�����֤���ܴ����µĶ���
//����Ψһ��(��̬)ָ�룬��˽�л���static ����* variable
//��̬���������������ⶨ��

class Printer
{
private:
	Printer()
	{}
	Printer(const Printer& p)
	{}

public:
	//�����ṩgetInstance��������ָ��
	static Printer* getInstance()//ע�ⷵ�ص��ǡ�static Printer*������
	{
		return thePrinter;
	}

	void print(string s)
	{
		cout << s << endl;
	}
private:
	static Printer* thePrinter;
};
Printer* Printer::thePrinter = new Printer;

void test01()
{
	//�õ���ӡ��
	//Printer* MyGet = Printer::getInstance();
	Printer* MyGet;
	MyGet = Printer::getInstance();//�˴���Ϊͨ���������ʾ�̬��������Ϊ����ģʽ��Ҳ������ν�����ˣ����޶������
	MyGet->print("first use ->");
	(*MyGet).print("second use *");
}

int main()
{
	test01();
}


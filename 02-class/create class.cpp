#include<iostream>
using namespace std;

const double pi = 3.1415;

//1.���һ���࣬��Բ���ܳ�
class circle //class+������ע����Ļ�����{}��Ҫ�ӷֺ�;�����Ļ����ź�û;
{
public://����Ȩ��
	//������д����������Ա����
	//double circumference(double r)//�����в���
	//{
	//	return 2 * pi * r;
	//}
	double circumference()//�����޲�����ʵ�ֹ�����Ӧ�����Լ��ұ�����
	{
		return 2 * pi * r;
	}
	//���ð뾶����Ա���ԣ���Ա������/��Ա������Ҳ���ǳ�Ա������
	//1.��Ա���ԣ���Ա������
	double r;
	//2.��Ա������Ҳ���ǳ�Ա������
	void set_r(int m_r)//�˴������β���������ظ��ˣ����³���ԭ��
	{
		r = m_r;
	}
	circle()
	{
		cout << "moren" << endl;
	}
	circle(const circle& p)
	{
		cout << "kaobei" << endl;
	}
	~circle()
	{
		cout << "xigou" << endl;
	}
};

void test01()
{
	//ͨ���� ������������Ƕ���ĳ��󣬶���������ʵ����
	circle yuan;// yuan ���Ƕ���
	//������İ뾶��һ���Ը�ֵ
	//yuan.r = 20;
	//����ĺ���������ı��������ԣ���ֵ
	yuan.set_r(20);
	//���Բ���ܳ�
	//cout << "�ܳ� = " << yuan.circumference(20) << endl;//��ĳ�Ա�����в�������Ҫ������
	cout << "�ܳ� = " << yuan.circumference() << endl;
	cout << yuan.r << endl;
	circle c2(yuan);
}

int main()
{
	test01();
}

#include<iostream>
using namespace std;

//������C++�ڲ�ʵ�ֱ�����һ����ָ�볣����

//����ֻ�ܳ�ʼ��һ��
void test01()
{
	int a = 120, c = 210;
	int& b = a;//�Զ�ת��Ϊint* const b = &a����Ҳ˵��ΪɶҪ��ʼ������Ϊָ�볣���ͱ���Ҫ��ʼ��
	//int& b; b=a; �Ǵ����
	//�����д b = 20���ڲ����� b �����ã��Զ�ת��Ϊ *b = 20
	cout << "b=" << b << endl;
	/*int &b = c;//���м��ᱨ��
	cout << "b=" << b << endl;*/
}

//���ñ������úϷ����ڴ�ռ䣬�� int &b = 10 Ϊ�Ƿ�

//��Ҫ���ؾֲ����������ã��Ƿ�ֻҪ�ֲ������������أ���Ϊ�ֲ��ľ�ֻ�ھֲ���Ч�
//���������>�𰸣���ͨ�ľֲ��������ؾ���һ��ֵ�Ĵ��ݣ�������ص������ã���
//�����ǶԾֲ�������һ��ָ���Ǿֲ������˾ֲ��͡��ޡ��ˣ��򷵻ص����ָ��������룩
int& dowork()//�����һ�����ؾֲ����������� �ĺ�����ps����������� type����  name����������
{
	int a = 12;//a����һ���ֲ�����
	return a;//���������б���ʾ���С����ؾֲ���������ʱ�����ĵ�ַ : a�����ɼ�������˵�����õı��ʾ���һ��ָ�볣��

}

void test02()
{
	int& value = dowork();
	cout << "value = " << value << endl;//��һ���ܷ���a��ֵ��VS���Ż�
	cout << "value = " << value << endl;//�ɼ����¾�Ϊ����
	cout << "value = " << value << endl;
	cout << "value = " << value << endl;
}

//�����Ҫ�������ã������static����ס�ֲ�����
int& dowork2()
{
	static int a = 12;
	return a;
}
void test03()
{
	int& value = dowork2();
	cout << "value = " << value << endl;
	cout << "value = " << value << endl;
	cout << "value = " << value << endl;
	cout << "value = " << value << endl;
}

//��������ķ���ֵ�����ã���ô�������������Ϊ��ֵ
//����dowork() = 1000//�൱��a = 1000

int main()
{
	//test01();

	//test02();

	test03();

	system("pause");
}
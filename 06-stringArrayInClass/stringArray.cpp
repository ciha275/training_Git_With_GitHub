#include<iostream>
#include<string>
using namespace std;
#include"MyString.h"
#pragma warning(disable : 4996)


void test01()
{
	MyString str = "abc";

	cout << str << endl;

	/*cout << "������str�µ����ݣ�" << endl;

	cin >> str;								//ͨ������<<��>>��ʵ�ֶ�MyString���͵��������

	cout << "������Ϊ��" << str << endl;*/

	MyString str2(str);
	cout << "str2 = " << str2 << endl;

	MyString str3 = "aaaaaa";
	cout << "str3 = " << str3 << endl;
	
	str3 = str2;
	str3 = "aaaa";

	cout << "str3 = " << str3 << endl;

	str3[0] = 'w';

	cout << "str3 ��һ��λ��Ϊ = " << str3[0] << endl;

	MyString str4 = "";
	
	/*for test
	cout << "str2.m_Size= " << str2.getSize() << endl;
	cout << "str3.m_Size= " << str3.getSize() << endl;
	cout << str2 + str3 << endl;
	/*for test*/

	str4 = (str2 + str3); //�ַ���ƴ��

	cout << "str4 Ϊ " << str4 << endl;

	if (str3 == str4)
	{
		cout << "str3 �� str4���" << endl;
	}
	else
	{
		cout << "str3 �� str4�����" << endl;
	}

	/*int a = 10;
	cin >> a;
	cout << "a = " << a << endl;*/
}

int main()
{
	test01();
	MyString s1("aql");
	cin >> s1;
	cout << s1 << endl;
}

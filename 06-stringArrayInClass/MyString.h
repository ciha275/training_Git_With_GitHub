#pragma once
#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)

class MyString
{
	friend ostream& operator<<(ostream& cout, MyString& str);
	friend istream& operator>>(istream& cin, MyString& str);
	
public:
	//�вι���
	MyString(const char* str);
	//��������
	MyString(const MyString& str);
	//����
	~MyString();

	//����=�������Ĭ�ϻ�����=����ֻ��ǳ�������׳�����
	MyString& operator=(const char* str);
	MyString& operator=(const MyString& str);
	//����[]��������ܰ�λstr[i]����
	char& operator[](int index);
	//����+�������ʵ�������ַ�����ƴ��
	MyString operator+(const char* str);
	MyString operator+(const MyString& str);
	//����==��������ж����ַ�����ȷ�
	bool operator==(const char* str);
	bool operator==(const MyString& str);
	
	/**/int getSize();

private:
	char* pString;//ָ�������ָ��
	int m_Size;//�ַ�����С

};

#include "MyString.h"


//�вι���
MyString::MyString(const char* str)
{
	cout << "�вι���" << endl;
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);
}

MyString::MyString(const MyString& str)
{
	cout << "��������" << endl;
	this->pString = new char[(str.m_Size)+1];
	strcpy(this->pString, str.pString);
	this->m_Size = str.m_Size;
}

MyString::~MyString()
{
	cout << "����" << endl;
	if (this->pString != NULL)
	{
		delete[] this->pString;//ע���������飬delete���[]
		this->pString = NULL;
	}
}

MyString& MyString::operator=(const char* str)
{
	cout << "����������=�ĳ�����" << endl;
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString,str);
	return *this;//��������this�������ָ�룬*this��������
}

MyString& MyString::operator=(const MyString& str)
{
	cout << "����������=�Ŀ�����" << endl;
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}
	this->pString = new char[strlen(str.pString) + 1];
	//this->pString = new char[str.m_Size + 1];
	strcpy(this->pString, str.pString);
	return *this;//��������this�������ָ�룬*this��������
}


char& MyString::operator[](int index)
{
	return this->pString[index];
}

MyString MyString::operator+(const char* str)
{
	//���㷵�ص��ַ������ٵĴ�С
	int newSize = this->m_Size + /**/strlen(str)/**/+1;

	char* temp = new char[newSize];
	
	//����,����������ƴ��
	memset(temp,0,newSize);
	
	//strcat()�ǽ���β���������ʱtempȫ��0����β������ͷ��
	strcat(temp, this->pString);
	strcat(temp, /**/str/**/);
	
	//Ҫ�����Լ����������ͣ����Դ����������������temp
	MyString newstr(temp);//�вι���												//��������������ע�⣡��������������
	delete[] temp;//�ͷ������ʱ�ַ�����											//����+�����������ֵ�� ֵ���ݣ���
	return newstr;																//����ֵӦ���� ֵ���ݣ�����������
}																				//��󷵻ص�newstr�Ǿֲ����������������õĻ��Ҳ�������

MyString MyString::operator+(const MyString& str)
{
	//���㷵�ص��ַ������ٵĴ�С
	int newSize = this->m_Size + /**/strlen(str.pString)/**/+1;

	char* temp = new char[newSize];
	
	//����,����������ƴ��
	memset(temp, 0, newSize);
	
	//strcat()�ǽ���β���������ʱtempȫ��0����β������ͷ��
	strcat(temp, this->pString);
	strcat(temp, /**/str.pString/**/);
	
	//Ҫ�����Լ����������ͣ����Դ����������������temp
	MyString newstr(temp);//�вι���
	delete[] temp;//�ͷ������ʱ�ַ�����
	
	//cout << "newstr= " << newstr << endl;

	return newstr;
}

bool MyString::operator==(const char* str)
{
	if (strcmp(this->pString, str) && (this->m_Size == strlen(str)))
	{
		return true;
	}
	return false;
}

bool MyString::operator==(const MyString& str)
{
	if (strcmp(this->pString, str.pString) && (this->m_Size == str.m_Size))
	{
		return true;
	}
	return false;
}

int MyString::getSize()
{
	return this->m_Size;
}

//��������<<(���������)�����أ�ע��������Ԫ
ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString;
	return cout;
}

//���������>>(���������)�����أ�ע��������Ԫ
istream& operator>>(istream& cin, MyString& str)
{
	//���ж�ԭʼ�Ƿ������ݣ����У����
	if (str.pString != NULL)
	{
		delete[] str.pString;
		str.pString = NULL;
	}
	
	//�û���������
	char buf[1024];
	cin >> buf;
	
	//���û�������ַ�����ֵ��str
	str.pString = new char[strlen(buf)+1];
	str.m_Size = strlen(buf);
	strcpy(str.pString, buf);
	return cin;
}
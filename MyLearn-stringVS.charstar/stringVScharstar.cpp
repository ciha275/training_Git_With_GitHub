//char*
#include <iostream>
using namespace std;
//string
#include<string>

void testCharArray()

{
	char ch1[12] = "Hello Wrold"; //����ֻ��ch1[12]��ch1[11]���벻ͨ��,��ʾarray bounds overflow
	char* pch1, * pch2 = (char*)"string";
	char* pch3, * pch4;
	pch3 = &ch1[2];	//ch1[2]�ĵ�ַ����pch3
	char ch = 'c';
	pch4 = &ch;
	pch1 = ch1;

	cout << ch1 << endl;	//���ch1[0]��\0֮ǰ�������ַ�
	cout << pch1 << endl;	//���ch1[0]��\0֮ǰ�������ַ�
	cout << pch2 << endl;	//���ch1[0]��\0֮ǰ�������ַ�
	cout << pch3 << endl;	//���ch1[2]��\0֮ǰ�������ַ�
	cout << *pch3 << endl;	//������pch3���pch3ָ����ַ�
	cout << *pch4 << endl;	//������pch4���pch4ָ����ַ�
}

void testString() 
{ 
	string s1 = "this";	
	string s2 = string(" is");	
	string s3, s4;	
	s3 = string(" a").append("string.");	
	s4 = s1 + s2 + s3;	
	cout << s1 << endl;	
	cout << s2 << endl;	
	cout << s3 << endl;	
	cout << s4 << endl;	
	cout << s4.size() << endl;	
	s4.insert(s4.end() - 7, 1, ' ');	
	cout << s4 << endl; 
}

//char*��string���͵�ת��
void pCharToString()
{
	//from char* to string
	char* ch = (char*)"hello world";
	string s1 = ch;	//ֱ�ӳ�ʼ����ֵ
	string s2(ch), s3;
	s3 = string(ch);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	//from string to char*
	string str = string("string is commonly used.");
	/*************************************************************************
	��ʵû�кܴ�ı�Ҫ��stringת����char*,��Ϊstring����ֱ�ӵ����ַ�������ʹ�ã�
	��ͨ���±��������ַ�Ԫ�أ���str[1]��ʾ��1���ַ�'t'
	**************************************************************************/
	const char* ch1 = str.c_str();
	cout << ch1 << endl;
}


int main()
{
	testCharArray();
	testString();
	pCharToString();
}

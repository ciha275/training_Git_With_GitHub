#include<iostream>
#include "MyArray.h"
using namespace std;

MyArray::MyArray()
{
	this->m_Capacity = 200;
	this->m_Size = 0;
	this->pAdress = new int[this->m_Capacity];//newһ����СΪm_Capacity��int������
}

MyArray::MyArray(int a)
{
	this->m_Capacity = a;
	this->m_Size = 0;
	this->pAdress = new int[this->m_Capacity];
}

MyArray::MyArray(const MyArray& myarray)
{
	cout << "kaobei" << endl;
	this->pAdress = new int[myarray.m_Capacity];
	this->m_Capacity = myarray.m_Capacity;
	this->m_Size = myarray.m_Size;
	

	for (int i = 0; i < myarray.m_Size; i++)
	{
		this->pAdress[i] = myarray.pAdress[i];
	}
}

MyArray::~MyArray()
{
	cout << "xigou" << endl;
	if (this->pAdress != NULL)
	{
		delete[] this->pAdress;
		this->pAdress = NULL;
	}
}

int MyArray::showSize()
{
	return this->m_Size;
}

int MyArray::showCapacity()
{
	return this->m_Capacity;
}

void MyArray::pushback(int index)
{
	this->pAdress[m_Size] = index;//���һλ����[m_Size]
	this->m_Size++;//����һλ����С��һ
}

void MyArray::setData(int i, int index)
{
	this->pAdress[i] = index;
}

int& MyArray::operator[](int index)
{
	return this->pAdress[index];
}


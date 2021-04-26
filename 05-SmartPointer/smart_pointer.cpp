#include<iostream>
using namespace std;

class Person
{
public:
	Person(int a)
	{
		cout << "Person�Ĺ���" << endl;
		this->m_Age = a;
	}
	void showAge()
	{
		cout << "�����ǣ� " << this->m_Age << endl;
	}
	~Person()
	{
		cout << "Person������" << endl;
	}

private:
	int m_Age;

};

//����ָ��
//Ϊ�˱����ڶ��������������ͷŵ����⣬����һ������ָ����
//����ָ��Ĺ�����ú�ͻ��ڶ�������������������Ҳ������delete�ͷŶ���
class SmartPointer
{
public:
	//����ָ��Ĺ��죬��һ�������ڶ����Ķ����ָ�봫��˽��ָ�����ά��
	SmartPointer(Person* person)
	{
		cout << "smart�Ĺ���" << endl;
		this->person = person;
	}
	//����ָ����������ͷŶ����Ķ���
	~SmartPointer()
	{
		cout << "smart������" << endl;
		if (this->person != NULL)//���ָ����ָ����󣬽����ͷ�
		{
			delete this->person;
			this->person = NULL;//����Ұָ�룬���ͷź�ָ��ָ���
		}
	}

	//->��������أ�������Ч����sp->�������� = p->�������ԣ�p�Ƕ����ָ��
	//�ʣ�Ӧ�÷���person*ָ�룬����Ҫ����
	Person* operator->()
	{
		return this->person;
	}
	//*��������أ�������Ч����*sp.�������� = *p.�������ԣ�p�Ƕ����ָ��
	//�ʣ�Ӧ�÷���person�����壬����Ҫ������ע���Ƿ������ã���Ȼ����ֵ������
	Person& operator*()
	{
		return *this->person;
	}

private:
	Person* person;//��Ա���ԣ�ά��һ��˽��ָ��ָ�����
};


void test01()
{
	////��ջ�����٣������Զ�����
	//Person p1(10);
	//p1.showAge();
	////�ڶ������٣�new һ����������ǵ���delete���ͷ�
	//Person* p2 = new Person(20);
	//p2->showAge();
	//delete p2;//����delete�������ͷ�,�ɼ�������һ������


	//�������ָ����࣬ʵ�ʾ�����ջ����������
	SmartPointer sp(new Person(21));//�ڶ��������Ķ����ָ�봫������ָ��
	//ָ�������->��*��ϣ����ֱ�Ӷ�spʹ�ã�����Ҫ����
	sp->showAge();//ʵ�ʴ˴�"sp->"��ô�������Ƿ��ص�person* person���ָ�룬ָ��������ԣ�Ӧ����person->���ԣ�����ʵ��Ӧ����sp->->showAge()�����������Ż���
	(*sp).showAge();

}
int main()
{
	test01();
}





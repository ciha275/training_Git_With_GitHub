#include<iostream>
using namespace std;
class Person
{
public:
	void show()
	{
		cout << "�ޱ�����ֻ�Ǵ�ӡ" << endl;
	}
	//void showAge()//��ΪshowAge()������this�����ÿ�ָ��ʱ��this=NULL���������NULL->m_age������
	//{
	//	cout << "��ӡ���� age = " << this->m_age << endl;
	//}

	//����showAge
	void showAge() 
	{
		if (this == NULL)
		{
			return;
		}
		cout << "��ӡ���� age = " << this->m_age << endl;
	}

private:
	int m_age = 21;
};

void test01()
{
	Person* p = NULL;//�趨һ����ָ��
	p->show();
	p->showAge();//�˵��ý��ᵼ�´���,showAge��������ã�����Ȼ�����
}


//�������볣����

//������ʵ������ʱ��ǰ��const����const Person p1��
//			��p1�ĸ����Զ������޸���
//����������Ա��������ʱ�����const����void showAge() const��
//			��showAge()��������в���ȥ�޸�������

//�������ܵ�����ͨ����������ͨ�����ǿ���ȥ�޸����Եģ�
//�������ܵ��ó�����

int main()
{
	test01();
}
#include<iostream>
using namespace std;

//�� �����е�ȱ��
//1.��ʽ��ע��
#define MyAdd(x,y) x+y
void test01()
{
	int result = MyAdd(10, 20) * 20;

	cout << "result = " << result << endl;//ʵ����ʾ 410 ��ϣ��ֵ(10+20)*20=600��ԭ�����ں궨�岢û�У�x+y��

}
//2.������⣩����һ��ԭԭ�������滻����������������һ�ֺ������뺯����ͬ���ڣ������������ʵ��ط�����Ԥ�����һ��չ�������Բ���Ҫ�������õĿ���
#define MyCompare(x,y) ((x)<(y) ? (x):(y))
inline void mycompare(int x, int y)
{
	int result = x < y ? x : y;
	cout << "result of inline = " << result << endl;
}
void test02()
{
	int a = 10;
	int b = 20;

	//int result = MyCompare(++a, b);//Ԥ�����ԭԭ������չ�����൱��int res = ((++a)<(b) ? (++a):(b))�����˳��ִ������++a��������󴫻�ֵΪ12
	//cout << "result = " << result << endl;//����ֵӦΪ11

	mycompare(++a, b);//ֱ�ӵȼ��������д��룬�����˴���Ϊ�����ġ�ֵ���ݡ���ֱ�Ӵ��루++a����11 ���ֵ
	//int result = 11 < 20 ? 11 : 20;
	//cout << "result of inline = " << result << endl;

}
//��������ֻ�ǶԱ�������һ�������顱�����������ܲ������⽨�飬û�����������ĺ�����������Ҳ���ܼ�������


int main()
{
	//test01();
	test02();
}
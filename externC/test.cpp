# define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>  //C++�����ַ���ʹ�õ�ͷ�ļ�,��ӡ�ַ���ʱ��Ҫ������ͷ�ļ�
#include <ctime>
using namespace std;
//����
#define Day 7
struct Student {
	string name;
	int age;
};
//Ctrl + M + O 
//Ctrl + M + L
//int main() {
//	cout << "Hello world" << endl;
//	//��������
//	/*int a = 100;
//	char c = 'L';
//	cout << "a = " << a << endl;
//	cout << "һ�ܵ������� " <<Day << endl;
//
//	const int month = 12;
//	cout << "�£�" << month << endl;*/
//
//	//�������ʹ�С
//	cout << "short: " << sizeof(short) << endl;
//	cout << "int: " << sizeof(int) << endl;
//	cout << "long: " << sizeof(long) << endl;
//	cout << "long long: " << sizeof(long long) << endl;
//
//	//cout << "\a" << endl;
//	//�ַ���
//	string str = "�й�����";
//	cout << str << endl;
//
//	//bool��������
//	/*bool flag = true;
//	flag = false;
//	cout << flag << endl;
//	cout << sizeof(flag) << endl;*/
//	////1.����
//	//cout << "�����룺" << endl;
//	//cin >> a;
//	//cout << a << endl;
//	////2.������
//	//float f = 3.14f;
//	//cout << "�����븡����" << endl;
//	//cin >> f;
//	//cout << f << endl;
//	////3.�ַ���
//	//cout << "�����ַ�" << endl;
//	//cin >> c;
//	//cout << c << endl;
//	
//	//4.�ַ���
//	/*cout << "�����ַ�����";
//	cin >> str;
//	cout << str << endl;*/
//
//	/*cout << "��bool���͸�ֵ��";
//	cin >> flag;
//	cout << "����ֵΪ��"<<flag << endl;*/
//	//system("pause");
//
//	//���������(�Ե�ǰϵͳʱ�����������)
//	srand((unsigned int)time(NULL));
//
//	
//	//while (1) {
//	//	int num = rand() % 100 + 1;  //����0 + 1 ~ 99 + 1֮��������
//	//	cout << num << endl;
//	//}
//
//	//�����ṹ�����ʱ �ṹ��ؼ���struct����ʡ��
//	
//
//	return 0;
//}

//�����������أ�overload�� namemangling
//C++�������صײ�ԭ���ǻ��ڱ������� name mangling ����
//��������ҪΪC++�е����к������ڷ��ű�������Ψһ�ı�ʶ���������ֲ�ͬ�ĺ���
//void display() {
//	cout << "display()" << endl;
//}
//
//void display(int a) {
//	cout << "display():" << a<<endl;
//}
//void display(int a, int b) {
//	cout << "display():" << a << b << endl;
//}
//void display(double x) {
//	cout << "display():" << x << endl;
//}
//int main() {
//	//������ԣ����뷴��� Alt+G
//	display();
//	display(10);
//	display(10 ,100);
//	display(12.5);
//	getchar();
//	return 0;
//}

//extren C �����밴��C���Եĵķ�ʽȥ����
//����������Ҫ����Ŀ����Ҫʹ�õ�C���Եĵ�������/��ܣ���ô�൱��C��C++���Ͽ���

//������c���Դ�����һ��math������ʵ�ּӼ��˳��ĺ���
//��ô��C++�ļ�ʹ��ʱֱ�ӽ������¶���
extern "C" {  //��Ҫ�����ͷ�ļ������math.c�ĺ�������
#include "math.h"
}

//�Ժ���ʹ��ʱ��extern "C" ���ں�������ǰ�棬���������ں�������ǰ��
//�����ط�����Ҳ�ǿ��Ե�
//extern "C" int add(int x, int y);
//int main() {
//	cout << add(10,20) << endl;
//}
//int add(int x, int y) {
//	return x + y;
//}


//����Ҫע�⣬C�����ļ������޷�ʹ�ø÷�����
//������������C������Ҳ���ñ�extern "C"���εĴ��룬�൱���ⲿ��������C��C++������ʹ��
//ϣ��ʵ����C�ļ����ȥ��extern "C" ��������C++�����ͼ���
//#define __cplusplus  //��������C++�ļ�Ĭ�ϻᶨ��ģ�ֻҪ��C++�ļ��ͻ��У���C�ļ���û�е�
#include "math.h"

//������CҲ��ʹ��sum
extern "C" int sum(int x, int y);
int main() {
	sum(100, 200);
	return 0;
}
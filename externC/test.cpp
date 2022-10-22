# define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>  //C++风格的字符串使用的头文件,打印字符串时需要包含该头文件
#include <ctime>
using namespace std;
//常量
#define Day 7
struct Student {
	string name;
	int age;
};
//Ctrl + M + O 
//Ctrl + M + L
//int main() {
//	cout << "Hello world" << endl;
//	//变量创建
//	/*int a = 100;
//	char c = 'L';
//	cout << "a = " << a << endl;
//	cout << "一周的天数： " <<Day << endl;
//
//	const int month = 12;
//	cout << "月：" << month << endl;*/
//
//	//数据类型大小
//	cout << "short: " << sizeof(short) << endl;
//	cout << "int: " << sizeof(int) << endl;
//	cout << "long: " << sizeof(long) << endl;
//	cout << "long long: " << sizeof(long long) << endl;
//
//	//cout << "\a" << endl;
//	//字符串
//	string str = "中共中央";
//	cout << str << endl;
//
//	//bool数据类型
//	/*bool flag = true;
//	flag = false;
//	cout << flag << endl;
//	cout << sizeof(flag) << endl;*/
//	////1.整形
//	//cout << "请输入：" << endl;
//	//cin >> a;
//	//cout << a << endl;
//	////2.浮点型
//	//float f = 3.14f;
//	//cout << "请输入浮点数" << endl;
//	//cin >> f;
//	//cout << f << endl;
//	////3.字符型
//	//cout << "输入字符" << endl;
//	//cin >> c;
//	//cout << c << endl;
//	
//	//4.字符串
//	/*cout << "输入字符串：";
//	cin >> str;
//	cout << str << endl;*/
//
//	/*cout << "向bool类型赋值：";
//	cin >> flag;
//	cout << "布尔值为："<<flag << endl;*/
//	//system("pause");
//
//	//随机数种子(以当前系统时间生成随机数)
//	srand((unsigned int)time(NULL));
//
//	
//	//while (1) {
//	//	int num = rand() % 100 + 1;  //生成0 + 1 ~ 99 + 1之间的随机数
//	//	cout << num << endl;
//	//}
//
//	//创建结构体变量时 结构体关键字struct可以省略
//	
//
//	return 0;
//}

//函数重载重载（overload） namemangling
//C++函数重载底层原理是基于编译器的 name mangling 机制
//编译器需要为C++中的所有函数，在符号表中生成唯一的标识符，来区分不同的函数
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
//	//进入调试，进入反汇编 Alt+G
//	display();
//	display(10);
//	display(10 ,100);
//	display(12.5);
//	getchar();
//	return 0;
//}

//extren C 将代码按照C语言的的方式去编译
//加入我们需要在项目中需要使用到C语言的第三方库/框架，那么相当于C与C++联合开发

//假设以c语言创建了一个math函数，实现加减乘除的函数
//那么在C++文件使用时直接进行如下定义
extern "C" {  //需要定义该头文件，存放math.c的函数声明
#include "math.h"
}

//对函数使用时将extern "C" 放在函数声明前面，而并不放在函数定义前面
//两个地方都放也是可以的
//extern "C" int add(int x, int y);
//int main() {
//	cout << add(10,20) << endl;
//}
//int add(int x, int y) {
//	return x + y;
//}


//但是要注意，C语言文件下是无法使用该方法的
//当我们再想在C程序里也想用被extern "C"修饰的代码，相当于这部分我想让C和C++都可以使用
//希望实现在C文件里就去掉extern "C" ，而遇到C++环境就加上
//#define __cplusplus  //这个宏就是C++文件默认会定义的，只要是C++文件就会有，而C文件是没有的
#include "math.h"

//并测试C也能使用sum
extern "C" int sum(int x, int y);
int main() {
	sum(100, 200);
	return 0;
}
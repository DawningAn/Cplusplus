#include <iostream>


//1.指定命名空间访问
//2.全局展开 using namespace std（一般情况，不建议）
//3.部分展开

// 常用部分展开
using std::cout;
using std::endl;
using std::cin;


int main() {
    // 流插入运算符 <<
    // endl '\n'
	cout << "1" << endl;
	cout << "1" << endl;
	cout << "11" << '\n';

	cout << "1" << endl;

    // 流提取 >>
    int n;  
    cin >> n;  // 自动识别类型
	return 0;
}
#include <iostream>

using namespace std;

/*2*2 + 1*d
等差数列 2，5，8，11，14。。。。
（从 2 开始的 3 为公差的等差数列）
输出求等差数列前n项和

输入描述：
输入一个正整数n。

输出描述：
输出一个相加后的整数。*/

// 求等差数列前n项和
int main(){
    int x;
    while(cin >>x){
        cout<< x*2 + (x*(x-1) / 2)*3;
    }
}
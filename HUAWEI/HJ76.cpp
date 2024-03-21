#include <iostream>
using namespace std;

/*
验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。

例如：

1^3=1

2^3=3+5

3^3=7+9+11

4^3=13+15+17+19

输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。

输入描述：
输入一个int整数

输出描述：
输出分解后的string*/

// /题目的意思是已知等差数列和,项数n为m，公差d为2，求首项a1
int main(){
    int m;
    while(cin >>m){
        int length = m;
        m = m*m*m;
        int a1;
        string res = "";
        for(a1 = 1;a1<=m;a1+=2){
            if( m == (length*a1) + (length*(length-1))/2 * 2){
                break;
            }
        }
        while(length){
            if(length == 1){
                cout<<a1;
            }else{
                cout<<a1<<'+';
            }
            a1+=2;
            length--;
        }
       
    }
}
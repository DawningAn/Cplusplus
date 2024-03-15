#include <iostream>

using namespace std;
/*
输入一个字符串和一个整数 k ，截取字符串的前k个字符并输出


输入描述：
1.输入待截取的字符串

2.输入一个正整数k，代表截取的长度

输出描述：
截取后的字符串*/

int main(){
    string S;
    int  k;
    while(cin >>S>>k){
        for(int i =0;i<k;i++){
            cout<<S[i];
        }
    }
}
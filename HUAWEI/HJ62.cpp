#include <iostream>

using namespace std;


/*
输入一个正整数，计算它在二进制下的1的个数。
注意多组输入输出！！！！！！

输入描述：
输入一个整数

输出描述：
计算整数二进制中1的个数*/

int main(){
    int N;
    while(cin >>N){
        int count = 0;
        while(N){
            if(N%2 == 1){
                count++;
            }
            N/=2;
        }
        cout<<count<<endl;
    }
}
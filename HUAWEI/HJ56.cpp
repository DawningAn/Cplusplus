#include <iostream>

using namespace std;


/*
完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。

它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。

例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。

输入n，请输出n以内(含n)完全数的个数。
输入描述：
输入一个数字n

输出描述：
输出不超过n的完全数的个数*/

bool Judge(int X){
    int Sum = 0;
    for(int i = 1;i<X;i++){
        if(X%i == 0){
            Sum += i;
        }
    }
    if(Sum == X){
        return true;
    }else{
        return false;
    }
}
int main(){
    int N;
    while(cin >>N){
        int count = 0;
        for(int i = 1;i<=N;i++){
            if(Judge(i)){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
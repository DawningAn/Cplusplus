#include <iostream>

using namespace std;

/*
输出 1到n之间 的与 7 有关数字的个数。
一个数与7有关是指这个数是 7 的倍数，或者是包含 7 的数字（如 17 ，27 ，37 ... 70 ，71 ，72 ，73...）

输入描述：
一个正整数 n 。( n 不大于 30000 )

输出描述：
一个整数，表示1到n之间的与7有关的数字个数。*/

bool baohan7(int x){
    while(x){
        int temp = x%10;
        if(temp == 7){
            return true;
        }
        x/=10;
    }
    return false;
}
int main(){
    int n;
    while(cin >>n){
        int count = 0;
        for(int i = 1;i<=n;i++){
            if(baohan7(i)){
                count++;
            }else if(i % 7 == 0){
                count++;
            }
        }
        cout<<count;
    }
}
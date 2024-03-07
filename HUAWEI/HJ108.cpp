#include <iostream>

using namespace std;

// 求最小公倍数
int main(){
    int a,b;
    cin>>a>>b;
    //最小公倍数一定是较大者的整数倍
    //a*b一定是a、b的公倍数，但不一定是最小的
    //所以我们从i=1,到i=min(a,b)一一遍历去寻找最小公倍数

    if(a <b){
        int  temp = a;
        a= b;
        b = temp;
    }

    for(int i = a;i<=a*b;i++){
        if(i%a == 0 && i%b == 0){
            cout << i<< endl;;
            return 0;
        }
    }
}
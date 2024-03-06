#include <iostream>

using namespace std;

/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个 n 级的台阶总共有多少种跳法（先后次序不同算不同的结果）
*/

//递归与分治

int Jump(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    return Jump(n-1) + Jump(n-2);
}
int main(){
    int N;
    // cout<<"Please enter count of step: ";
    cin >>N;
    // cout << "All methods: " << Jump(N)<<endl; 
    cout <<Jump(N);
    return 0;
}
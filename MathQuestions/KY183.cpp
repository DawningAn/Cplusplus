#include <iostream>
#include <cmath>
using namespace std;

// n(2<=n<=10000)，要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出-1

//输入为N
bool Judge(int x){
    for(int i = 2;i<=sqrt(x);i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    bool onot = false;
    for(int i = 2;i<N;i++){
        bool tag = Judge(i);  // 判断当前数是否为素数
        if(tag && i%10 == 1){
            onot = true;
            cout << i<<' ';
        }

    }
    if(onot == false){
        cout <<-1;
    }
}
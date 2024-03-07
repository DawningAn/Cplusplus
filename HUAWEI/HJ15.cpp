#include <iostream>
#include <map>

using namespace std;


/*
输入一个 int 型的正整数，计算出该 int 型数据在内存中存储时 1 的个数*/

int main(){
    int N;
    cin >>N;
    map<int ,int> MM;
    MM[0] = 0;
    MM[1] = 0;
    while(N){
        MM[N%2] += 1;
        N/=2;
    }
    cout << MM[1]<<endl;
}
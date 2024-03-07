#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

/*
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）*/
int main(){
    long N;
    cin >>N;
    vector <int> V;
    for(long i = 2;i<=sqrt(N) && i<=N;i++){
        while(N % i == 0){
            V.push_back(i);
            N/=i;
        }
    
    }
    if(N - 1){
        V.push_back(N);
    }
    sort(V.begin(),V.end());

    for(unsigned int i =0;i<V.size();i++){
        cout << V[i] << ' ';
    }
    return 0;
}
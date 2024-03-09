#include <iostream>
#include <vector>

using namespace std;

// 约数的个数

int Judge(int N){
    int count = 0;
    for(int i = 1;i<=N;i++){
        if(N%i == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int N;
    vector<int> V;
    while(cin >>N){
        for(int i = 0;i<N;i++){
            cin >>V[i];
        }

        for(unsigned int i =0;i<V.size();i++){
            int num  = Judge(V[i]);
            V[i] = num;
        }

        for(unsigned int i =0;i<V.size();i++){
            cout << V[i]<<' ';
        }
        cout <<endl;
    }   
}
    
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
给定 n 个字符串，请对 n 个字符串按照字典序排列。*/
int main(){
    int N;
    while(scanf("%d",&N) != EOF){
        vector<string> V;
        string s;
        for(int i =0;i<N;i++){
            cin >>s;
            V.push_back(s);
        }

        sort(V.begin(),V.end());

        for(int i = 0;i<N;i++){
            cout << V[i]<<endl;
        }
        
    }

}
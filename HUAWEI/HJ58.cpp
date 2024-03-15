#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



/*
输入n个整数，找出其中最小的k个整数并按升序输出

本题有多组输入样例

输入描述：
第一行输入两个整数n和k
第二行输入一个整数数组

输出描述：
从小到大输出最小的k个整数，用空格分开。*/
int main(){
    int n,k;
    while(cin >>n>>k){
        vector<int> V(n);
        for(int i = 0;i<n;i++){
            cin>>V[i];
        }

        sort(V.begin(),V.end());

        for(int i =0;i<k;i++){
            cout<< V[i]<<' ';
        }
    }
}
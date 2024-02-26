#include <iostream>
#include <vector>

using namespace std;
/*
一个数如果恰好等于它的各因子(该数本身除外)子和，如：6=3+2+1。则称其为“完数”；若因子之和大于该数，则称其为“盈数”。
求出2到60之间所有“完数”和“盈数”。
输入描述：
题目没有任何输入。
输出描述：
输出2到60之间所有“完数”和“盈数”，并以如下形式输出： E: e1 e2 e3 ......(ei为完数) G: g1 g2 g3 ......(gi为盈数) 其中两个数之间要有空格，
行尾不加空格。
*/

int sum(int n){
    int Sum = 0;
    for(int j = 1;j<n;j++){
        if(n%j ==0){
            Sum += j;
        }
    }
    return Sum;
}

int main(){
    vector<int> W;  // 完数
    vector<int> Y;  // 盈数
    for(int i =2;i<=60;i++){
        if(i == sum(i)){
            W.push_back(i);
        }else if(sum(i) > i){
            Y.push_back(i);
        }
    }
    printf("E: ");
    for(unsigned int i = 0;i<W.size();i++){
        printf("%d ",W[i]);
    }
    printf("\n");

    printf("G: ");
    for(unsigned int i = 0;i<W.size();i++){
        printf("%d ",W[i]);
    }
    
}
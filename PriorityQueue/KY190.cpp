#include <iostream>
#include <queue>
#include <set>
using namespace std;

/*
查找一个数组的第K小的数，注意同样大小算一样大。 如  2 1 3 4 5 2 第三小数为3。
输入描述：
输入有多组数据。 每组输入n，然后输入n个整数(1<=n<=1000)，再输入k。
输出描述：
输出第k小的整数。*/

int main(){
    int N;
    cin >>N;
    priority_queue<int> PQ;
    set<int>S;
    int num;
    for(int i =0;i<N;i++){
        cin >> num;
        S.insert(num);
    }

    for(auto it  = S.begin();it!=S.end();it++){
        PQ.push((*it) *-1);
    }    
    int k;
    cin >> k;
    
    
    while(k > 1){
        PQ.pop();
        k--;
    }
    if(k == 1){
        cout<<PQ.top() * -1<<endl;
    }
}
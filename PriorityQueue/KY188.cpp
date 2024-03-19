#include <iostream>
#include <queue>
using namespace std;

/*
哈夫曼树，第一行输入一个数n，表示叶结点的个数。
需要用这些叶结点生成哈夫曼树，根据哈夫曼树的概念，这些结点有权值，即weight，题目需要输出所有结点的值与权值的乘积之和的最小值。

输入描述：
输入有多组数据。 每组第一行输入一个数n，接着输入n个叶节点（叶节点权值不超过100，2<=n<=1000）。
输出描述：
输出权值。*/

// 每次在小根堆选出最小的两个
int main(){
    int N;
    cin>>N;
    priority_queue<int>PQ;
    int num;
    for(int i = 0;i<N;i++){
        cin>>num;
        PQ.push(num * -1);
    }
    int wpl = 0;

    //
    while(PQ.size() >= 2){
        int min1 = PQ.top();
        PQ.pop();
        int min2 = PQ.top();
        PQ.pop();
        wpl += min1 + min2;
        PQ.push(min1 + min2);
    }
    int res = wpl * -1;
    cout<<res<<endl;
    
}
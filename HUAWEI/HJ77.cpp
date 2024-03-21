#include <iostream>
#include <stack>
#include<vector>
#include<algorithm>
using namespace std;


/*
给定一个正整数N代表火车数量，0<N<10，接下来输入火车入站的序列
一共N辆火车，每辆火车以数字1-9编号，火车站只有一个方向进出，同时停靠在火车站的列车中，只有后进站的出站了，先进站的才能出站。
要求输出所有火车出站的方案，以字典序排序输出。

输入描述：
第一行输入一个正整数N（0 < N <= 10），第二行包括N个正整数，范围为1到10。

输出描述：
输出以字典序从小到大排序的火车出站序列号，每个编号以空格隔开，每个输出序列换行，具体见sample。*/



//栈的顺序一定被包含于所给数列的全排列中，所以问题就转换为了怎么去判断一个序列是不是合法的出栈序列？

int n,a[15],c[15];

//根据入栈序列判断出栈序列是否正确
bool check(int b[]){
    stack<int> st;//栈
    int j=0;
    for(int i=0;i<n;i++){//遍历入栈序列
       st.push(a[i]);
        while(!st.empty()&&b[j]==st.top()){//如果栈顶元素等于出栈序列元素，则栈顶元素出栈并出栈序列下标加一
            st.pop();
            j++;
        }
    }
    return st.empty();//判断栈是否为空
}

int main(){
    while(cin >> n){
        for(int i=0;i<n;i++){//输入入栈序列
            cin >> a[i];
            c[i]=a[i];
        }
        //排序
        sort(c,c+n);
        //全排列出栈序列
        do{
            if(check(c)){//如果成功，则输出该出栈序列
                for(int i=0;i<n;i++){
                    cout << c[i] << " ";
                }
                cout << endl;
            }
        }while(next_permutation(c,c+n));
        
    }
    return 0;
}

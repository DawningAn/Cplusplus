#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

/*
题目标题：

将两个整型数组按照升序合并，并且过滤掉重复数组元素。
输出时相邻两数之间没有空格。



输入描述：
输入说明，按下列顺序输入：
1 输入第一个数组的个数
2 输入第一个数组的数值
3 输入第二个数组的个数
4 输入第二个数组的数值

输出描述：
输出合并之后的数组*/

int main(){
    int n1;
    int n2;
    vector<int>A;
    map<int,int> M;
    cin >>n1;
    for(int i =0;i<n1;i++){
        int temp;
        cin>>temp;
        M[temp] = 1;
    }

    for(auto it=M.begin();it!=M.end();it++){
        A.push_back(it->first);
    }
    cin>>n2;
    for(int i =0;i<n2;i++){
        int temp;
        cin>>temp;
        auto it = A.begin(); 
        for(;it!=A.end();it++){
            if(*it == temp){
                break;
            }
        }
        if(it == A.end()){
            A.push_back(temp);
        }
        
    }
    sort(A.begin(),A.end());

    for(int i =0;i<A.size();i++){
        cout<<A[i];
    }


    

    

}
#include <iostream>
#include <map>
using namespace std;

/*
数据表记录包含表索引index和数值value（int范围的正整数）
请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照index值升序进行输出。
输入描述：
先输入键值对的个数n（1 <= n <= 500）
接下来n行每行输入成对的index和value值，以空格隔开

输出描述：
输出合并后的键值对（多行）*/
int main(){
    int N;
    while(scanf("%d",&N) != EOF){
        int index,value;
        map<int,int> Map;
        for(int i =0;i<N;i++){
            cin >>index>> value;
            // count 找索引是否存在
            if(Map.count(index) == 1){
                Map[index] += value;
            }else{
                Map[index] = value;
            }
        }
        
        for(int i = 0;i<=11111111;i++){
            if(Map.count(i) ==1){
                cout << i<<' '<<Map[i]<<endl;
            }
        }
    }
}
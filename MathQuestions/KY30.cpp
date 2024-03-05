#include <iostream>
#include <vector>
using namespace std;

/*
将一个长度最多为30位数字的十进制非负整数转换为二进制数输出。
输入描述：
多组数据，每行为一个长度不超过30位的十进制非负整数。 （注意是10进制数字的个数可能有30个，而非30bits的整数）
输出描述：
每行输出对应的二进制数。*/


string S;

void div(){
    int remine = 0;
    for(unsigned int i = 0;i<S.size();i++){
        int temp = remine*10 + S[i] - '0';
        remine = temp %2;
        S[i] = temp/2 + '0';
    }
    while(S[0] == '0'){
        S.erase(0,1);  // 从第0个位置开始删除1个元素
    }
}

int main()
{
    while (getline(cin,S))
    {
        vector<int> V;
        while(!S.empty()){
            V.insert(V.begin(), (S.back() - '0')%2);
            div();
        } 

        for(unsigned int i =0;i<V.size();i++){
            printf("%d",V[i]);
        }
        printf("\n");
    }
}
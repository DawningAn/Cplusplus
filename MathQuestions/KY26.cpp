#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

string S;
/*
 对于一个十进制数A，将A转换为二进制数，然后按位逆序排列，再转换为十进制数B，我们称B为A的二进制逆序数。
 例如对于十进制数173，它的二进制形式为10101101，逆序排列得到10110101，其十进制数为181，181即为173的二进制逆序数。
输入描述：
    一个1000位(即10^999)以内的十进制数。
输出描述：
    输入的十进制数的二进制逆序数。*/
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

        V.reserve(V.size());
        int mi = 0;
        for(unsigned int i =0;i<V.size();i++){
            printf("%d",V[i]);
        }
        printf("\n");
    }
}
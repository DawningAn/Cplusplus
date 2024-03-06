#include <iostream>

using namespace std;


/*
将M进制的数X转换为N进制的数输出。
输入描述：
输入的第一行包括两个整数：M和N(2<=M,N<=36)。
下面的一行输入一个数X，X是M进制的数，现在要求你将M进制的数X转换成N进制的数输出。
输出描述：
输出X的N进制表示的数。*/

// 数字转字符
char toChar(int x){
    return x+'0';
}
// 字符转数字
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    long long Number = 0;
    string S;
    cin >>S;
    // M进制转十进制
    for(unsigned int i = 0;i<S.size();i++){
        Number *= m;
        Number += toChar(S[i]); 
    }
}
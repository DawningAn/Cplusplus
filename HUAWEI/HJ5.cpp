#include <iostream>
#include <map>
#include <cmath>

using namespace std;


/*
写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。
输入描述：
输入一个十六进制的数值字符串。

输出描述：
输出该数值的十进制字符串。不同组的测试用例用\n隔开。*/



int main(){
    map <char,int> MM;
    MM['A'] = 10;
    MM['B'] = 11;
    MM['C'] = 12;
    MM['D'] = 13;
    MM['E'] = 14;
    MM['F'] = 15;
    string S;
    while(cin >> S){
        int result = 0;
        int len = S.size();
        int mi = 0;
        for(int i = len - 1;i>1;i--){
            if(S[i] >= 'A' && S[i] <= 'F'){
                result += pow(16,mi) * MM[S[i]];
            }else{
                result += pow(16,mi) * (S[i] - '0');
            }
            mi++;
        }
        cout<<result<<endl;
    }
}
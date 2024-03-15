#include <iostream>
#include <stack>

using namespace std;


/*
给定一个字符串描述的算术表达式，计算出结果值。

输入字符串长度不超过 100 ，合法的字符包括 ”+, -, *, /, (, )” ， ”0-9” 。

即只进行整型运算，确保输入的表达式合法
输入描述：
输入算术表达式

输出描述：
计算出结果值*/
// void computer(stack<int>& )

int main(){
    stack<int> NumS;
    stack<char> OptS;
    string S;
    while(cin >>S){
        for(unsigned int i = 0; i < S.size();i++){
            switch(S[i]){
                case '+':

            }
        }
    }
}
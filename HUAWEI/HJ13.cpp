#include <iostream>
#include <stack>
using namespace std;


/*
输入一个英文语句，每个单词用空格隔开。保证输入只包含空格和字母。

输出描述：
得到逆序的句子*/


int main(){
    string S;
    stack <string> ss;
    while(cin >> S){
        ss.push(S);
    }
    while(!ss.empty()){
        cout<< ss.top()<< ' ';
        ss.pop();
    }
    cout<< endl;
    return 0;

}
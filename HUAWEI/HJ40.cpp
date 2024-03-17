#include <iostream>


using namespace std;


/*
输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数。

输入描述：
输入一行字符串，可以有空格

输出描述：
统计其中英文字符，空格字符，数字字符，其他字符的个数*/
int main(){
    string S;
    getline(cin,S);
    int AlphaB = 0;
    int NUM = 0;
    int Space  = 0;
    int Other = 0;

    for(unsigned int i= 0;i<S.size();i++){
        if(isalpha(S[i])){
            AlphaB++;
        }else if (isblank(S[i])){
            Space++;
        }else if(isdigit(S[i])){
            NUM++;
        }else{
            Other++;
        }
    }
    cout<<AlphaB<<endl;
    cout<<Space<<endl;
    cout<<NUM<<endl;
    cout<<Other<<endl;
    return 0;
}
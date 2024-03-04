#include <iostream>

using namespace std;

/*
输入描述:
输入包含多个测试实例，每一行对应一个字符串，串长最多100字母。
输出描述:
对每个字符串，输出它是第几个，如第一个输出为"case1: "；如果一个字符串是回文串，则输出"yes",否则输出"no"，在yes/no之前用一个空格。*/
bool ispa(string s){
    int begin = 0;
    int end = s.size() - 1;
    while(begin <end){
        if(s[begin] != s[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main(){
    string S;
    int count = 1;
    while(getline(cin,S)){
        
        if(ispa(S)){
            printf("case%d: yes\n",count);
        }else{ 
            printf("case%d: no\n",count);
        }
        count++;
    }  
}
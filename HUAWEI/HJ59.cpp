#include <iostream>
#include <map>
using namespace std;


/*
找出字符串中第一个只出现一次的字符

输入描述：
输入一个非空字符串

输出描述：
输出第一个只出现一次的字符，如果不存在输出-1*/
int main(){
    string S;
    while(cin >>S){
        map<char,int> Mp;
        for(unsigned i = 0;i<S.size();i++){
            Mp[S[i]] +=1;
        }

        for(unsigned i = 0;i<S.size();i++){
            if(Mp[S[i]] == 1){
                cout<<S[i]<<endl;
                return 0;
            }
        }
        cout <<-1<<endl;

    }       
}
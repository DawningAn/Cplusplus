#include <iostream>>

using namespace std;


/*
给定两个只包含小写字母的字符串，计算两个字符串的最大公共子串的长度。

注：子串的定义指一个字符串删掉其部分前缀和后缀（也可以不删）后形成的字符串。

输入描述：
输入两个只包含小写字母的字符串

输出描述：
输出一个整数，代表最大公共子串的长度*/

int main(){
    string S1;
    string S2;
    while(cin>>S1>>S2){
        int length = 0;
        for(int i = 0;i<S1.size();i++){
            for(int j = 1;j<S1.size();j++){
                string sub1 = S1.substr(i,j-i);  // 得到S1的所有子串
                
                for(int k = 0;k<S2.size()-j-i;k++){
                    if(S2.substr(k,length) == sub1){
                        if(j-i >length){
                            length = j-i;
                        }
                    }
                }
            }
        }
        cout<<length<<endl;
    }
}
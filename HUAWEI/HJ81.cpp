#include <iostream>
#include <map>  
using namespace std;

/*
判断短字符串S中的所有字符是否在长字符串T中全部出现
请注意本题有多组样例输入。

输入描述：
输入两个字符串。第一个为短字符串，第二个为长字符串。两个字符串均由小写字母组成。

输出描述：
如果短字符串的所有字符均在长字符串中出现过，则输出字符串"true"。否则输出字符串"false"。*/
int main(){
    string S;
    string T;
    while(cin >>S>>T){
        map<char,int> M;
        for(int i = 0;i<S.size();i++){
            M[S[i]] = 1;
        }
        for(auto it = M.begin();it!=M.end();it++){
            if(T.find(it->first) == string::npos){
                cout<<"false"<<endl;
                return 0;
            }
        }
        cout<<"true"<<endl;
    }
}
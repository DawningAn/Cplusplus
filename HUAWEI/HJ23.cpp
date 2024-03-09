#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


/*
字符串只包含小写英文字母, 不考虑非法输入，输入的字符串长度小于等于20个字节。

输出描述：
删除字符串中出现次数最少的字符后的字符串。*/
int main(){
    string S;
    vector<int> V(26,0);
    cin >> S;
    for(unsigned int i = 0;i<S.size();i++){
        V[S[i] - 'a']++;
    }

    vector<int> outArray(V);

    sort(V.begin(),V.end());
    int flag = 0;
    for(unsigned i=0;i<V.size();i++){
        if(V[i] >= 1){
            flag = V[i];  //最少出现的字符的次数
            break;
        }
    }
    string result = "";
    for(unsigned i=0;i<S.size();i++){
        if(outArray[S[i] - 'a'] != flag){
            result.push_back(S[i]);
        }
    }
    cout <<result<<endl;    
}
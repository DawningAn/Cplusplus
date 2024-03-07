#include <iostream>
#include <map>

using namespace std;

/*
计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内( 0~127 ，包括 0 和 127 )
换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。*/

int main(){
    string S;
    cin >> S;
    map<char,int> Map;
    for(unsigned int i =0;i<S.size();i++){
        Map[S[i]] = 1;
    }
    cout <<Map.size() << endl;
    return 0;

}
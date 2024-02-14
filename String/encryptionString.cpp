#include <iostream>

using namespace std;

/*
对给定的一个字符串，把其中从a-y,A-Y的字母用其后继字母替代，把z和Z用a和A替代，则可得到一个简单的加密字符串。
输入描述：
读取这一行字符串，每个字符串长度小于80个字符
输出描述：
对于每组数据，输出每行字符串的加密字符串。*/

int main(){
    string str;
    cin >>str;
    getline(cin,str);
    for(int i =0;i<str.size();i++){
        if(str[i] == 'z'){
            str[i] = 'a';
        }
        if(str[i] == 'Z'){
            str[i] = 'A';
        }else if(str[i] >= 'a' && str[i] <= 'y'){
            str[i] += 1;
        }
    }
    cout <<str<<endl;
    return 0;
}
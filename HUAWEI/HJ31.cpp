#include <iostream>
#include <vector>
#include<sstream>
using namespace std;


/*
对字符串中的所有单词进行倒排。

说明：

1、构成单词的字符只有26个大写或小写英文字母；

2、非构成单词的字符均视为单词间隔符；

3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；

4、每个单词最长20个字母；*/
/*
输入的字符串中除了空格还有其他字符，首先我们将其他字符转换为空格，然后按照空格分割整个字符串，得到储存每一个单词的vector
倒序输出这个vector。特别注意的地方是最后一个单词输出后不需要再输出空格了，因此单独考虑最后一个单词的输出。*/
int main(){
    string S;
    vector<string> V;
    getline(cin,S);

    for(unsigned i = 0;i<S.size();i++){
        if(!isalpha(S[i])){
            S[i] = ' ';
        }
    }

    stringstream input(S);
    while(input>>S){  //按照空格分割字符串
        V.push_back(S);
    }

    for(int i = V.size()-1;i>=0;i--){
        cout<<V[i]<<' ';
    }
}
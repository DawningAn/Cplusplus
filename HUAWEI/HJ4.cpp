#include <iostream>

using namespace std;


/*
•输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；

•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
输入描述：
连续输入字符串(每个字符串长度小于等于100)

输出描述：
依次输出所有分割后的长度为8的新字符串*/

int main(){
    string S;
    cin>>S;
    unsigned int Size = S.size();
    int count = Size /8;
    //字串个数
    int begin = 0;
    while(count >= 1){
        cout << S.substr(begin, 8) <<endl;
        begin += 8;
        count--;
    }
    if(Size % 8 != 0){
        int cc = Size %8;  // 剩余的字符个数
        string remind(8-(Size%8), '0');
        cout <<S.substr(begin, cc) << remind <<endl;
    }
    
    return 0;
}
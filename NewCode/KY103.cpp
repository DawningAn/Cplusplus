#include <iostream>
#include <vector>
using namespace std;


// 计算2的幂次
// 对一个十进制数进行2的幂次方分解

// 1315
// 2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)

/*
将n转换成二进制表示10001001，每个非0位后面还有几位，其对应幂次就是几。

例如第一个1后面还有7位，则该项幂次为7，7输入下一轮递归。

以此类推……

但要注意特殊情况：幂次遇到1时就直接转化为2。*/

string powTwo(int n){
    //递归终止条件
    if(n == 0)return "0";
    if(n == 2)return "2";
    //继续递归
    vector<int> bin;//二进制 倒序储存

    while(n > 0){
        bin.push_back(n % 2);
        n /= 2;
    }
    string res = "";
    for(int i = bin.size()-1; i >= 0; i--){  // 二进制正序遍历
        if(bin[i] == 1){
            if(i == 1)  res += "+2";
            else res += "+2(" + powTwo(i) + ")";
        }
    }
    res.erase(0, 1); //剃掉res最前面的+
    return res;
}

int main(){
    int N;
    string S;
    while(cin >>N){
        cout << powTwo(N)<<endl;
    }
}
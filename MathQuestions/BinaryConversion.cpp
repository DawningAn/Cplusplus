#include <iostream>

using namespace std;

/*
输入描述：
多行，每一行表示要求的数字
输出描述：
输出共T行。每行输出求得的二进制串。*/
int main(){
    unsigned int N;
    while(scanf("%d",&N) != EOF){
        string S = "";
        unsigned int temp = N;
        while(temp){
            string c = to_string(temp %2);
            S.insert(0, c);
            temp /= 2;
        }
        cout << S<<endl;
    }
}
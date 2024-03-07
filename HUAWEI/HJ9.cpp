#include <iostream>

using namespace std;

/*
输入一个 int 型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
保证输入的整数最后一位不是 0 。

按照从右向左的阅读顺序，返回一个不含重复数字的新的整数
*/

int main(){
    string Num;

    cin>>Num;
    int count = 0;
    for(int i = Num.size() -1;i>=count;i--){
        for(int j = i-1;j>=count;j--){
            if(Num[j] == Num[i]){
                for(int k = j;k>count;k--){
                    Num[k] = Num[k-1]; 
                }
                count++;
            }

        }

        
    }
    for(int i = Num.size() -1;i>=count;i--){
            cout << Num[i];
        }
        cout <<endl;
}
#include <iostream>

using namespace std;

/*
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于 0.5 ,向上取整；小于 0.5 ，则向下取整。

数据范围：保证输入的数字在 32 位浮点数范围内*/
int main(){
    double N;
    cin >> N;
    int chu = N / 1;

    double remind = N-chu;

    if(remind >= 0.5){
        remind = 1;
    }else{
        remind = 0;
    }

    cout << chu+remind<<endl;
    return 0;
}  
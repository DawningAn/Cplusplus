#include<iostream>
#include <cmath>

using namespace std;

// 定义函数原型
void calArea(double);
const double PI {3.1415926};

int main(){
    int radious{};
    cout << "请输入半径："<<endl;
    cin>>radious;
    calArea(radious);
    return 0;
}

void calArea(double radius){
    cout<<"圆的面积为："<< PI * pow(radius,2)<<endl;
}
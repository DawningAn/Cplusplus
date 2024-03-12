#include <iostream>
#include <cmath>

using namespace std;


/*
计算一个浮点数的立方根，不使用库函数。
保留一位小数。

输入描述：
待求解参数，为double类型（一个实数）

输出描述：
输出参数的立方根。保留一位小数。*/

int main(){
    double N;
    while(cin >> N){
        // if(N <0){
        //     printf("-nan\n");
        // }
        // double res = pow(N,1.0/3);
        // printf("%.1lf",res);

        // 二分法
        double temp;
        if(N <0){
            temp = N;
            N = abs(temp);
        }
        double left = -1.0,right = max(1.0, N);
        double mid; 
        while(abs(right - left) > 0.01){
            
            mid = (left + right) / 2.0;
            if(mid * mid *mid < N){
                left = mid;
            }else if(mid * mid * mid > N){
                right = mid;
            }
            
        }
        if(temp < 0){
            printf("-%.1lf\n",mid);
        }else{
            printf("%.1lf\n",mid);
        }
        
    }
    return 0;
}
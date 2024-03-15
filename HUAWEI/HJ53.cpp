#include <iostream>

using namespace std;

/*以上三角形的数阵，第一行只有一个数1，以下每行的每个数，是恰好是它上面的数、左上角数和右上角的数，3个数之和（如果不存在某个数，认为该数就是0）。

求第n行第一个偶数出现的位置。如果没有偶数，则输出-1。例如输入3,则输出2，输入4则输出3，输入2则输出-1。

输入描述：
输入一个int整数

输出描述：
输出返回的int值*/

//分析思路:
//                                          1
//                                     1    1    1
//                                1    2    3      2      1
//                           1    3    6     7     6      3    1
//                      1    4    10   16    19    16    10    4    1
//                  1   5    15   30   45    51    45    30    15    5    1
//              1   6   21   50   90   126   141   126   90    50    21   6    1
//          1   7   28  77
//      1   8   36  112
//  1   9   51  156
//  10 
//通过以上的数据分析规律为 {-1,-1,2,3,2,4,2,3,2,4,...}
int main(){
    int n;
    while(cin>>n){
        int index = -1;  // 默认认为不存在偶数
        int arr[4] = {3,2,4,2};
        if(n>2){
            index = arr[n%4];
        }
        cout<<index<<endl;
    }
}
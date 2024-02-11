#include <iostream>

using namespace std;

// 第一行输入一个数n，1 <= n <= 1000，下面输入n行数据，每一行有两个数，分别是x y。输出一组x y，该组数据是所有数据中x最小，且在x相等的情况下y最小的。 
// 输入描述：
// 输入有多组数据。 每组输入n，然后输入n个整数对。
// 输出描述：
// 输出最小的整数对。
int main(){
    int n;
    
    scanf("%d",&n);
    int arr[n][2];
    int minIndex = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i][0] < arr[minIndex][0]){

            minIndex = i;
        }
        if(arr[i][0] == arr[minIndex][0]){
            if(arr[i][1] < arr[minIndex][1]){
                minIndex = i;
            }
        }
    }
    printf("%d %d\n",arr[minIndex][0],arr[minIndex][1]);
    return 0;

}
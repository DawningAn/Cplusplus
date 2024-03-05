#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
N个1到500之间的随机整数。
请你删去其中重复的数字，即相同的数字只保留一个，把其余相同的数去掉，然后再把这些数从小到大排序，按照排好的顺序输出。

输入描述：
第一行先输入随机整数的个数 N 。 接下来的 N 行每行输入一个整数，代表明明生成的随机数。 具体格式可以参考下面的"示例"。
输出描述：
输出多行，表示输入数据处理后的结果*/

int main(){
    int N;  // n个随机数
    scanf("%d",&N);
    int arr[500] = {0};
    int temp;
    for(int i =0;i<N;i++){
        scanf("%d",&temp);
        arr[temp] = 1;
        getchar();
    }

    for(int i = 0;i<500;i++){
        if(arr[i] == 1){
            printf("%d\n",i);
        }
    }
   //寻找形同元素
}
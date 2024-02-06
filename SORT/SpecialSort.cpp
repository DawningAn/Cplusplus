#include <iostream>
#include <algorithm>
 
using namespace std;

#define MAX 1000

// 输入一系列整数，将其中最大的数挑出（有多个最大数时，挑出一个即可），并对剩下的数排序，
// 如果无剩下的数，那么输出-1



int main(){
    int N;
    int arr[MAX];
    while(scanf("%d",&N) != EOF){
        for(int  i = 0;i<N;i++){
            scanf("%d",&arr[i]);
        }
    }
    sort(arr,arr+N);
    printf("%d\n",arr[N - 1]);
    N -= 1;
    if(N == 0){
        printf("-1");
    }else{
        for(int i = 0;i<N;i++){
        printf("%d ",arr[i]);
    }
    }
    
    printf("\n");
    return 0;

}
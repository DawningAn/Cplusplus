#include <iostream>

using namespace std;

int main(){
    int N;
    while(true){
        scanf("%d",&N);
        if(N == 0)
            break;
        
        int arr[N][N];
        for(int i = 0;i<N;i++){
            //打印每一行
            arr[i][0] = 1;
            arr[i][i] = 1;
        }
        for(int i = 2;i<N;i++){
            for(int j = 1;j<i;j++){
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
        for(int i = 0;i<N;i++){
            for(int j = 0;j<=i;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }


    }
}
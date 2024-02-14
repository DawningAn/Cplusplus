#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[100];
    int indexArr[100];
    int index = 0;
    int count = 0;

    while(scanf("%d",&n) != EOF){
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        if((arr[0] > arr[1])||(arr[0] <arr[1])){
                count++;
                indexArr[index++] = 0;
            }

        for(int i = 1; i<n-1; i++){
            if((arr[i] > arr[i+1] && arr[i] >arr[i-1])
            ||(arr[i] <arr[i-1] && arr[i] < arr[i+1])
            ){
                count++;
                indexArr[index++] = i;
            }
        }

        if((arr[n-1] > arr[n-2])||(arr[n-1] <arr[n-2])){
                count++;
                indexArr[index++] = n-1;
            }  // 4 4 4 4

        for(int i = 0;i<count;i++){
            printf("%d ",indexArr[i]);
        }

    }
    return 0;
}
// 输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。
#include <iostream>

using namespace std;

//输入n(1<=n<=200)，接着输入n个数，然后输入x。
int main(){
    int n;
    scanf("%d",&n);
    int arr[200];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i = 0;i<n;i++){
        if(arr[i] == x){
            printf("%d\n",i); 
            return 0;
        }    
    }
    printf("-1");
}
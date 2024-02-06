#include <iostream>
#include <algorithm>

using namespace std;

// 输入10个整数，彼此以空格分隔。重新排序后输出（也按空格分隔），要求:
//  1）首先输出其中的奇数，并且按照从大到小的顺序排列；2）然后输出其中的偶数，并且按照从小到大的顺序排列


void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

bool comp(int a,int b){
    return a>b;
}
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    int left = 0;
    int right = 9;
    //快排思想 1 2 3 4 5 6 7     1 7 3 5 4 6 2
    int temp = arr[0];
    while(left < right){
        while(arr[right] % 2 == 0 && left <right){
            right--;
        }
        while(arr[left] % 2!= 0 && left < right){
            left++;
        }
        if(left < right){
            swap(arr[left],arr[right]);
        }

    }

    sort(arr,arr + left + 1,comp);
    sort(arr+left + 1,arr +10);
    for(int i = 0;i<10;i++){
        printf("%d ",arr[i]);
    }
}
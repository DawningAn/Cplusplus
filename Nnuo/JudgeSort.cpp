#include <iostream>

using namespace std;


/*给定一个长度为n的数组，数组中的每个元素都有一个属性值（0或1）
只有属性值不同的两个元素才能交换两个元素的位置，问能否通过交换元素的位置使得元素有序。（n<=1e5）*/

/*
输入描述:
先输入一个t，表示测试样例数量，每组首先输入一个n表示序列的长度，第二行输入n个数为原始序列，第三行n个数表示第a[i]个的属性。
输出描述:
其他描述:Yes或No
*/

bool issort(int arr[],int stats[],int n){
    bool ss = true;
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(stats[i] != stats[j]){
                if(arr[i] > arr[j]){
                    ss = false;
                }
            }
        }
    }
    return ss;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int stats[n];
        for(int i = 0;i<n;i++){
            scanf("%d",&stats[i]);
        }

        if(issort(arr,stats,n)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        t--;

    }
    return 0;
}
/*
输入数组长度 n 输入数组      a[1...n] 输入查找个数m 输入查找数字b[1...m]   输出 YES or NO  查找有则YES 否则NO 。
输入描述：
输入有多组数据。 每组输入n，然后输入n个整数，再输入m，然后再输入m个整数（1<=m,n<=100）。
输出描述：
如果在n个数组中输出YES否则输出NO。*/
#include <iostream>
#include <algorithm>

using namespace std;
int arr[100];
bool BinarySearch(int n,int x){
    int left = 0;
    int right = n-1;
    int mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(arr[mid] > x){
            right = mid - 1;
        }else if(arr[mid] < x){
            left = mid + 1;
        }else{
            return true;
        }
    }
    return false;
}
int main(){
    int n,m;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);

    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int x;
        scanf("%d",&x);
        if(BinarySearch(n,x)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    
    

}

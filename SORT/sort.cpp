#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int left, int right){
    //不发生交换，返回true (降序排列)
    if(left > right)
    {
        return true;
    }else{
        return false;
    }
    //return left > right;
}

int main(){ 
    int n;
    int arr[101];
    scanf("%d",&n); 
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }   
    sort(arr, arr+n, comp);

    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
   
  
}
#include <iostream>

using namespace std;

/*
n个猴子围坐一圈并按照顺时针方向从1到n编号，
从第s个猴子开始进行1到m的报数，报数到第m的猴子退出报数，从紧挨它的下一个猴子重新开始1到m的报数，
如此进行下去知道所有的猴子都退出为止。
求给出这n个猴子的退出的顺序表。

测试数据．
每一组数据有两行，第一行输入n（表示猴子的总数最多为100）第二行输入数据s(从第s个猴子开始报数)和数据m(第m个猴子退出报数)．
当输入０　０　０时表示程序结束*/
int main(){
    int n;
    int s,m;
    
    while(scanf("%d",&n)!=EOF){
        cin>>s>>m;
        if(n == 0 && s ==0&& m==0)
            break;
        int arr[n];
        for(int i =0;i<n;i++){
            arr[i] =i+1;
        }
        // 1 2 3 4 5
        int t=n, i=s-1, k=0;
        while(n>0){
            i = (i+m-1)%n;
            printf("%d",arr[i]);
            for(int j =i;j<n-1;j++){
                arr[j] = arr[j+1];
            }
            k++;  //表示当前已经出去的猴子个数
            if(k == t){
                printf("\n");
                break;
            }else{
                printf(",");
            }
            n--;  //去掉猴子
            

        }

        
    }
}
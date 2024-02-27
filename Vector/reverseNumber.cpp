#include <iostream>
#include <stack>


using namespace std;

/*
对于每种情况，输入文件的第一行包含一个长度为n的整数序列(0 < n≤10000)。
第二行包含n个整数a1, a2，…，an(-1 000 000 000 000 000≤ai≤1 000 000 000 000 000 000)。*/
int main(){
    stack<int> S;
    int N;
    while(scanf("%d",&N) != EOF){
        int num;
        for(int i = 0;i<N;i++){
            scanf("%d",&num);
            S.push(num);
        }

        while(!S.empty()){
            printf("%d ",S.top());
            S.pop();
        }
    }
}
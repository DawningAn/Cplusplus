#include <iostream>
#include <stack>

using namespace std;

/*
对于每组测试数据，第一行是一个正整数 n（0 < n <= 10000）。
而后的 n 行
每行的第一个字符可能是'P'或者'O'或者'A'；
如果是'P'，后面还会跟着一个整数，表示把这个数据压入堆栈；
如果是'O'，表示将栈顶的值 pop 出来，如果堆栈中没有元素时，忽略本次操作；
如果是'A'，表示询问当前栈顶的值，如果当时栈为空，则输出'E'。堆栈开始为空。
输出描述：
    对于每组测试数据，根据其中的命令字符来处理堆栈；并对所有的'A'操作，输出当时栈顶的值，每个占据一行，如果当时栈为空，则输出'E'。*/
int main(){
    stack<int> Stack;
    int n;
    char op;
    int number;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;++i){
            scanf("%c",&op);
            if(op=='P'){
                scanf("%d",&number);
                Stack.push(number);
            }
            else if(op=='O'&&!Stack.empty()){
                Stack.pop();
            }
            else if(op=='A'){
                if(!Stack.empty()){
                    printf("%d\n",Stack.top());
                }
                else{
                    cout<<'E'<<endl;
                }
            }
        }
    }
    return 0;
}
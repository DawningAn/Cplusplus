#include <iostream>

using namespace std;

/*
由正整数1，2，3……组成了一颗特殊二叉树。我们已知这个二叉树的最后一个结点是n。现在的问题是，结点m所在的子树中一共包括多少个结点。     比如，n = 12，m = 3那么上图中的结点13，14，15以及后面的结点都是不存在的，结点m所在子树中包括的结点有3，6，7，12，因此结点m的所在子树中共有4个结点。

输入描述：
    输入数据包括多行，每行给出一组测试数据，包括两个整数m，n (1 <= m <= n <= 1000000000)。

输出描述：
    对于每一组测试数据，输出一行，该行包含一个整数，给出结点m所在子树中包括的结点的数目。*/


int CountNode(int N,int m){
    if(m > N){
        return 0;
    }
    return 1 + CountNode(N,m*2) + CountNode(N,m*2+1);  // 当前节点 + 左子树节点数量 + 右子树节点数量
}
int main(){
    int m,n;
    while(cin >>m>>n){
        cout << CountNode(n,m)<<endl;
    }

}
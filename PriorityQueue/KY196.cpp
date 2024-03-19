#include <iostream>
#include <queue>
using namespace std;

//自定义一个复数
struct Complex{
    int re;
    int im;
};

// 自定义一个小于号
bool operator < (Complex lhs,Complex rhs){
    // 如果左边小于右边，则为大根堆
    return lhs.re*lhs.re + lhs.im*lhs.im  < rhs.re*rhs.re + rhs.im*rhs.im;
}

/*
一个复数（x+iy）集合，两种操作作用在该集合上
1、Pop 表示读出集合中复数模值最大的那个复数，如集合为空 输出 empty 
不为空就输出最大的那个复数并且从集合中删除那个复数，再输出集合的大小SIZE； 

2 Insert a+ib  指令（a，b表示实部和虚部），将a+ib加入到集合中 ，输出集合的大小SIZE；     
最开始要读入一个int n，表示接下来的n行每一行都是一条命令。

输入描述：
输入有多组数据。 每组输入一个n(1<=n<=1000)，然后再输入n条指令。
输出描述：
根据指令输出结果。 模相等的输出b较小的复数。 a和b都是非负数。*/
int main(){
    int N;
    cin>>N;
    priority_queue<Complex> PQ;
    for(int i = 0;i<N;i++){
        string action;
        cin>>action;
        if(action =="Pop"){
            if(PQ.empty()){
                cout<<"empty"<<endl;
            }else{
                cout<<PQ.top().re<<"+i"<<PQ.top().im<<endl;
                PQ.pop();
                cout<<"SIZE = "<<PQ.size()<<endl;
            }
        }

        if(action == "Insert"){
            int re;
            int im;
            // 格式化读取
            scanf("%d+i%d",&re,&im);
            Complex c;
            c.re = re;
            c.im  =im;
            PQ.push(c);
            cout<<"SIZE = "<<PQ.size()<<endl;
        }
        
    }

}
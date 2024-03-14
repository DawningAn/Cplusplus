#include <iostream>

using namespace std;



/*
一个笼子里面关了鸡和兔子（鸡有2只脚，兔子有4只脚，没有例外）
已经知道了笼子里面脚的总数a，问笼子里面至少有多少只动物，至多有多少只动物。

输入描述：
每组测试数据占1行，每行一个正整数a (a < 32768)

输出描述：
输出包含n行，每行对应一个输入,包含两个正整数，第一个是最少的动物数，第二个是最多的动物数
两个正整数用一个空格分开 如果没有满足要求的答案，则输出两个0。
*/


int main(){


    /*
不论是兔子还是鸡，它们的脚数都是偶数；
也就是说，当总脚数a是奇数时，问题无解。
因此在总脚数是偶数的前提下，求最多动物数的时候，只需将它们全部考虑成鸡。
然而，求最少动物数的时候，优先考虑脚多的兔子后，会出现
两种情况：1. 有多余的脚但又不够构成兔子；2. 刚好没有多余的脚。
对于第一种情况，剩下只可能是两只脚；第二种情况没有剩下脚。因此，可以用剩下的脚除以2来判断需不需要多
添加一只鸡。*/
    int N; // 笼子里的脚数
    while(cin >> N){
        // 最多的动物个数和最少的动物个数
        // 脚的个数为奇数，则无解
        if(N %2 != 0){
            cout << "0 0"<<endl;
            return 0;
        }
        int Max = 0;
        int Min = 0;

        Max = N/2;
       

        Min = N/4;
        if(N%4 == 2){
            Min++;
        }
        //20 --> 5 10
        cout << Min<<' '<<Max<<endl;
    }
}
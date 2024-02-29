#include <iostream>
#include <vector>

using namespace std;

// 已知数组递推关系为An+1=(cAn+dAn-1)%M，%M是除以M取余数的运算，运算结果取值在[0,M-1]之间。
// 已知A0,A1,c,d,M，N的值，编程求AN的值。
int main()
{
    int A0, A1, c, d, M, N;
    while (cin >> A0 >> A1 >> c >> d >> M >> N){
        vector<int> V(N+1,0);
        V[0] = A0;
        V[1] = A1;
        for(int i =2;i<=N;i++){
            //V[i] = (c*V[i-1]+d*V[i-2])%M;
            V[i] = (c*V[i-1]%M + d*V[i-2]%M)%M;
        }
        cout << V[N]<<endl;
    }
    return 0;
   
}
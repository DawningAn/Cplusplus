#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}
int main()
{
    // 求最大公约数
    int M, N;
    cin >> M >> N; // 49 14
    printf("%d\n", GCD(M,N));
    return 0;
}
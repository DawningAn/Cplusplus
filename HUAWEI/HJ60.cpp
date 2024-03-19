#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*
任意一个偶数（大于2）都可以由2个素数组成，组成偶数的2个素数有很多种情况，本题目要求输出组成指定偶数的两个素数差值最小的素数对。
输入描述：
输入一个大于2的偶数

输出描述：
从小到大输出两个素数*/
bool Judge(int x)
{
    if (x == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int X;
    while (cin >> X)
    {
        // 记录当前的最小数对
        int min = X;
        int arr[2];
        for (int i = 2; i < X; i++)
        {

            if ((Judge(i) && Judge(X-i)))
            {
                if (abs(X-i-i) < min)
                {
                    min = abs(X-i-i);
                    arr[0] = i;
                    arr[1] = X-i;
                }
            }
        }
        sort(arr, arr + 2);

        cout << arr[0] << endl;
        cout << arr[1] << endl;
    }
}
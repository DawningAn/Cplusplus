#include <iostream>
#include <vector>

using namespace std;

/*
输入 n 个整型数，统计其中的负数个数并求所有非负数的平均值，结果保留一位小数，如果没有非负数，则平均值为0
本题有多组输入数据，输入到文件末尾。

输入描述：
输入任意个整数，每行输入一个。

输出描述：
输出负数个数以及所有非负数的平均值*/

int main()
{
    vector<int> V;

    int FuCount = 0;
    int ZhCount = 0;
    double Sum = 0.0;
    double  num = 0;
    while (cin >> num)
    {
        if (num < 0)
        {
            FuCount++;
        }
        else if(num >0)
        {
            ZhCount++;
            Sum += num;
        }
    }
    cout << FuCount << endl;
    double res = Sum / ZhCount;
    printf("%.1lf\n", res);
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
/*
第一行为一个整数N，表示三角形个数，接下来N行，每行用6个空格隔开的数：x1 y1 x2 y2 x3 y3
(x,y)为三角形三个顶点坐标


*/
int main()
{
    int N;

    cin >> N;
    int x1, y1, x2, y2, x3, y3;
    while (N--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        vector<long long> v;
        // 计算三个边长的平方
        long long a, b, c;
        a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        b = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
        c = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        // 如果三点不构成三角形输出 "invalid"(不要双引号)
        //
        // 如果三点构成钝角三角形输出"obtuse"(不要双引号)
        //
        // 如果三点构成锐角三角形输出"acute"(不要双引号)
        //
        // 如果三点构成直角三角形输出 "right"(不要双引号
        sort(v.begin(), v.end());
        long long min1, min2, max;

        double min11 = (double)sqrt(min1);
        double min22 = (double)sqrt(min2);
        double maxvv = (double)sqrt(max);
        if (min11 + min22 < maxvv || min11 + min22 - maxvv < 0.00001)
        {
            cout << "invalid" << endl;
            continue;
        }
        if (min1 + min2 == max)
        {
            cout << "right" << endl;
            continue;
        }
        if (min1 + min2 > max)
        {
            cout << "acute" << endl;
            continue;
        }
        if (min1 + min2 < max)
        {
            cout << "obtuse" << endl;
            continue;
        }
    }
    return 0;
}
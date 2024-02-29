#include <iostream>
#include <vector>
#include <algorithm>
/*
一个给定的数组，已知每个数组元素值都不相同。编程指出：数组中值第K大的元素是多少？
*/

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> V(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    sort(V.begin(), V.end());
    for (int i = 0; i < n; i++)
    {
        cout << V[i]<<" ";
    }
    cout << endl;
    printf("max k: %d\n", V[n - k]);
}

/*
int main()
{
    int n, k;
    while (cin >> n && n)
    {
        cin >> k;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        cout << v[k - 1] << endl;
    }
}
*/
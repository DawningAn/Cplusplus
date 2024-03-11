#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
#define MAX 1000000000
// 求质因数个数
// 求正整数N(N>1)的质因数的个数。 相同的质因数需要重复计算。如120=2*2*2*3*5，共有5个质因数。

int FenJie(int N)
{
	int count;
	for (int k = 2; k < N; k++)
	{
		while (k != N)
		{
			if (N % k == 0)
			{
				printf("%d\n", k);
				count++;
				N = N / k;
			}
			else
				break;
		}
	}
	printf("%d\n", N);
	count++;
	return count;
}

int main()
{
	int N;
	while (cin >> N)
	{
		FenJie(N);
	}

	return 0;
}

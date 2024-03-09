#include <iostream>
using namespace std;
#define MAX 1000000000
//求质因数个数
int f(int N) {
	int num = 0;
	while (N!=1) {
		for (int i = 2; i < MAX; i++) {
			if (N%i == 0) {
				N /= i;
				num++;
				//cout << "num=" << num << ", i=" << i << " , N=" << N << endl;
				break;
			}
		}
	}
	
	return num;
}
int main() {
	int N;
	while (cin >> N) {
		cout << f(N) << endl;
	}

	return 0;
}

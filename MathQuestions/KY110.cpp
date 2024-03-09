#include <iostream>
#include <cmath>

using namespace std;

// 输入一个数k，输出从k开始的第k个素数
bool Judge(int N){
    if(N <2){
        return false;
    }
    int sq = sqrt(N);
    for(int i = 2;i<= sq;i++){
        if(N%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    int count = 0;
    for(int i =2;;i++){
        if(Judge(i)){
            count++;
            if(count == N){
                cout <<i;
                return 0;
            }
        }
    }
    cout <<endl;
}

int main()
{
    int n;
    while (cin >> n) {
        int num = 0, number = 1;
        while (number++) {
            if (Judge(number) == true) {
                num++;
            }
            if (num == n) {
                break;
            }
        }
        cout << number << endl;
    }

    return 0;
}
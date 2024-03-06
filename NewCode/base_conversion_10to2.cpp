#include <iostream>

using namespace std;

int main(){
    long long N;
    while(scanf("%lld",&N) != EOF){
        string result = "";
        while(N){  // 4 --> 100
            result.insert(result.begin() ,(N%2) + '0');  // 3 --> 11
            N /=2;
        }
        cout<<result<<endl;
    }
    return 0;
}
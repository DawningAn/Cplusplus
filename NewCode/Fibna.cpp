#include <iostream>

using namespace std;


int Fib(int N){
    if(N == 1 || N == 2){
        return 1;
    }
    return Fib(N-2) + Fib(N-1);
}
int main(){
    int N;
    cin>>N;
    printf("N Fib: %d\n",Fib(N));
    return 0;
    // 1 1 2 3 5 8 13
}
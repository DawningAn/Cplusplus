#include <iostream>
#include <queue>
using namespace std;

int main(){
    //默认为大根堆
    priority_queue<int> PQ;
    int N;
    cin >> N;
    int num;
    for(int i =0;i<N;i++){
        cin >>num;
        PQ.push(num);
        cout<<PQ.top()<<endl;
    }
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*
Redraiment可以选择任意一个起点，从前到后，但只能从低处往高处的桩子走。他希望走的步数最多，你能替Redraiment研究他最多走的步数吗？

输入描述：
数据共2行，第1行先输入数组的个数，第2行再输入梅花桩的高度

输出描述：
输出一个结果*/


int main(){
    int N;
    
    while(cin >>N){
        vector<int > V(N,0);
        for(int i = 0;i<N;i++){
            cin >> V[i];
        }
        //268 90 179 129 204 224 
        vector<int> BV = V;

        int Maxcount = 0;
        for(int i =0;i<N;i++){

            // i=1
            int step = 1;

            sort(V.begin() + i + 1,V.end());

            int pre = V[i];
            for(int j = i+1;j<N;j++){
                if(V[j] > pre){
                    step++;
                    pre = V[j];
                }
            }
            if(step > Maxcount){
                Maxcount = step;
            }

            V = BV;
        }
        cout <<Maxcount<<endl;
    }
}
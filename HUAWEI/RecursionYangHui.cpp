#include <iostream>

using namespace std;


/*
递归解决杨辉三角*/

/*
    1
    1    1
    1    2    1
    1    3    3    1
    1    4    6    4    1
    1    5   10   10    5    1
*/

int arr[30][30] = {0};
void RecursionYang(int N){
    for(int i = 0;i<N;i++){
        for(int j = 0;j<=i;j++){
            if(i == j || j == 0){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }    
}

void PrintYang(int N){
    for(int i = 0;i<N;i++){
        for(int j = 0;j<=i;j++){
            cout << arr[i][j]<<' ';
        }
        cout <<endl;
    } 
}

void FormatPrintYang(int N){
    for(int i = 0;i<N;i++){
        for(int j = 0;j<=i;j++){
            cout << arr[i][j]<<' ';
        }
        cout <<endl;
    } 
}

int main(){
    int N;
    cin >>N;
    RecursionYang(N);
    PrintYang(N);
    return 0;

}
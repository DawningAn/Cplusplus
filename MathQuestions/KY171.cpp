#include <iostream>

using namespace std;

int main(){
    int M1 [2][3];
    int M2 [3][2];
    int M3 [2][2];

    // 1 2 3
    // 3 4 5
    // 6 7
    // 8 9
    // 10 11

    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cin >> M1[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            cin >> M2[i][j];
        }
    }

    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            for(int k = 0;k<3;k++){
                M3[i][j] += M1[i][k]* M2[k][j];
            }
        }
    }
  
    for(int i = 0;i<2;i++){
         for(int j = 0;j<2;j++){
            cout << M3[i][j]<<' ';
         }
         cout <<endl;
    }
       
}
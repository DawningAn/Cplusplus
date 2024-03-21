#include <iostream>
#include <vector>
using namespace std;


/*
如果A是个x行y列的矩阵，B是个y行z列的矩阵，把A和B相乘，其结果将是另一个x行z列的矩阵C。

矩阵的大小不超过100*100
输入描述：
第一行包含一个正整数x，代表第一个矩阵的行数
第二行包含一个正整数y，代表第一个矩阵的列数和第二个矩阵的行数
第三行包含一个正整数z，代表第二个矩阵的列数
之后x行，每行y个整数，代表第一个矩阵的值
之后y行，每行z个整数，代表第二个矩阵的值

1 * 2 2*1 1*1
输出描述：
对于每组输入数据，输出x行，每行z个整数，代表两个矩阵相乘的结果*/


int main(){
    int x,y,z;
    while(cin>>x>>y>>z){
        vector<vector<int>> A(x,vector<int>(y,0));
        vector<vector<int>> B(y,vector<int>(z,0));
        vector<vector<int>> C(x,vector<int>(z,0));
        // 输入第一个矩阵A
        for(int i = 0;i<x;i++){
            for(int j = 0;j<y;j++){
                int temp;
                cin>>temp;
                A[i][j] = temp;
            }
        }

        // 输入第二个矩阵B
        for(int i = 0;i<y;i++){
            for(int j = 0;j<z;j++){
                int temp;
                cin>>temp;
                B[i][j] = temp;
            }
        }

        //相乘
        for(int i = 0;i<x;i++){
            for(int j = 0;j<z;j++){
                
                for(int k = 0;k<y;k++){
                    C[i][j] += (A[i][k]*B[k][j]); 
                }
            }
        }

        for(int i =0;i<x;i++){
            for(int j = 0;j<z;j++){
                cout <<C[i][j]<<' ';
            }
            cout <<endl;
        }
        
    }
}


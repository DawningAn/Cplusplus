#include <iostream>
using namespace std;

int main(){
    int stuScores[] = {100,89,92,80,91};
    int *ptr {stuScores};

    cout << ptr[0] << " " ;
    cout << ptr[1] << " " ;
    cout << ptr[2] << " " ;
    cout << ptr[3] << " " ;
    cout << ptr[4] << " " ;
    cout << endl;


    return 0;

}
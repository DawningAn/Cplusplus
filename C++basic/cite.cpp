#include <iostream>

using namespace std;

void Swap(int* a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main(){
    int a = 10;
    int &b = a;
    int &c  =b;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout <<"-------------------"<<endl;

    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    cout <<"-------------------"<<endl;

    int num = 100;
    c = num;  // 同时将x（100）赋给了abc

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout <<"-------------------"<<endl;

    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    cout <<"-------------------"<<endl;

    int x = 100;
    int y = 200;
    Swap(&x,&y);
    cout<<"a:"<<x<<endl;
    cout<<"b:"<<y<<endl;
    cout <<"-------------------"<<endl;
    return 0;
}

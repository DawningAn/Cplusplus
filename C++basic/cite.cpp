#include <iostream>

using namespace std;

void Swap(int* a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}


int& Add(int x,int y){
    int c = x+y;
    return c;
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



    int &ret = Add(1,2);  // 结果是未定义的
    Add(3,4);
    cout<<"Add(1,2) is :"<<ret <<endl;
    cout<<"Add(1,2) is :"<<ret <<endl;
    //如果函数返回时，出了函数作用域，如果返回对象还在(还没还给系统)，则可以使用引用返回;如果已经还给系统了，则必须使用传值返回
    return 0;
}

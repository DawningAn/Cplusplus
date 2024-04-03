#include <iostream>

using namespace std;

inline int Add(int a,int b){
    int z = a+b;
    return z;
}

/*
 inline是一种以空间换时间的做法，如果编译器将函数当成内联函数处理，在编译阶段，会用函数体替换函数调用
 缺陷：可能会使目标文件变大，优势：少了调用开销，提高程序运行效率*/



 /*
 一般建议：将函数规模较小(即函数不是很长，具体没有准确的说法，取决于编译器内部实现)、不是递归、且频繁调用的函数采用inline修饰
否则编译器会忽略inline特性。*/
int main(){
    int ret = Add(1,1);
    cout<<ret<<endl;
    return 0;
}
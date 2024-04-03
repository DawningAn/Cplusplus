#include <iostream>

using namespace std;

/*使用auto定义变量时必须对其进行初始化，在编译阶段编译器需要根据初始化表达式来推导auto的实际类型。
因此auto并非是一种“类型”的声明，而是一个类型声明时的“占位符”，编译器在编译期会将auto替换为变量实际的类型。*/
int TestAuto()
{
    return 10;
}

void TestFor()
{
    int array[] = {1, 2, 3, 4, 5};
    for (auto &e : array)
        e *= 2;
    for (auto e : array)
        cout << e << " ";
    return;
}
int main()
{
    int a = 10;
    auto b = a;
    auto c = 'a';
    auto d = TestAuto();
    cout << typeid(b).name() << endl; // int
    cout << typeid(c).name() << endl; // char
    cout << typeid(d).name() << endl; // int

    cout<<"----------------------"<<endl;
    cout<<sizeof(nullptr)<<endl;
    cout<<sizeof((void*)0);

    TestFor();
}

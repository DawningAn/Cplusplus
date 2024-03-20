#include <iostream>
#include <map>
#include <vector>

using namespace std;

/*
输入N个学生的信息，然后进行查询。
输入描述：
输入的第一行为N，即学生的个数(N<=1000) 接下来的N行包括N个学生的信息，信息格式如下： 
01 李江 男 21 
02 刘唐 男 23 
03 张军 男 19 
04 王娜 女 19 
然后输入一个M(M<=10000),接下来会有M行，代表M次查询，每行输入一个学号，格式如下： 02 03 01 04

输出描述：
输出M行，每行包括一个对应于查询的学生的信息。 如果没有对应的学生信息，则输出“No Answer!”*/


int main(){
    int N;
    int M;

    cin >>N;
    map<string,string> students;
    for(int i = 0;i<N;i++){
        string id;
        string name;
        string sex;
        string age;
        cin >>id >>name >>sex >>age;

        string info = id+" "+name+" "+sex+" "+age;
        students[id] = info;
    }
    cin>>M;

    for(int i = 0;i<M;i++){
        string id;
        cin>>id;
        if(students.find(id) != students.end()){
            cout<<students[id]<<endl;
        }else{
            cout<<"No Answer!"<<endl;
        }
    }
}
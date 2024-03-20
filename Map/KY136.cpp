#include <iostream>
#include <map>
using namespace std;


/*
读入N名学生的成绩，将获得某一给定分数的学生人数输出。
输入描述：
测试输入包含若干测试用例，每个测试用例的格式为 
第1行：N 
第2行：N名学生的成绩，相邻两数字用一个空格间隔。 
第3行：给定分数 当读到N=0时输入结束。
其中N不超过1000，成绩分数为（包含）0到100之间的一个整数。
输出描述：
对每个测试用例，将获得给定分数的学生人数输出。*/

int main(){
    int N;
    int s;

    cin >>N;
    map<int, int>Mp;

    for(int i=0;i<N;i++){
        scanf("%d",&s);
        Mp[s]++;
    }

    //读取给定分数
    int score;
    cin>>score;
    if(Mp.find(score) != Mp.end()){
        cout<<Mp[score]<<endl;
    }else{
        cout<<'0'<<endl;
    }
}
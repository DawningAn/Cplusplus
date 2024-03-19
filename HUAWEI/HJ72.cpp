#include <iostream>

using namespace std;

/*
“百鸡问题”：鸡翁一值钱五，鸡母一值钱三，鸡雏三值钱一。百钱买百鸡，问鸡翁、鸡母、鸡雏各几何？
现要求你打印出所有花一百元买一百只鸡的方式。
输入描述：
输入任何一个整数，即可运行程序。

输出描述：
 输出有数行，每行三个整数，分别代表鸡翁，母鸡，鸡雏的数量*/

 int main(){
    // 鸡翁一值钱五，鸡母一值钱三，鸡雏三值钱一
    int money =100;
    int count =100;
    int N;
    while(cin >>N){
        for(int wong =0;wong<=20;wong++){
            for(int mu =0;mu<=33;mu++){
                for(int chu = 0;chu<=100;chu++){
                    if(wong+ mu+chu == count && (wong*5)+(mu*3) + (chu * 1.0/3) == money){
                        cout<<wong<<' '<<mu<<' '<< chu<<endl;
                    }
                }
            }
        }
    }
    
 }
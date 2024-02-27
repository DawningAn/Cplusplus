#include <iostream>
#include <stack>
#include <map>
#include <string>

using namespace std;

/*
    读入一个只包含 +, -, *, / 的非负整数计算表达式，计算该表达式的值。
输入描述：
    测试输入包含若干测试用例，每个测试用例占一行，每行不超过200个字符，整数和运算符之间用一个空格分隔。没有非法表达式。当一行中只有0时输入结束，相应的结果不要输出。
输出描述：
    对每个测试用例输出1行，即该表达式的值，精确到小数点后2位。*/
int main(){
    char buffer[300];
    map <char,int> priority = {
        {'$',0},
        {'+',1},{'-',1},
        {'*',2},{'/',2}
    };

    while(fgets(buffer,300,stdin) != NULL){
        string exp = buffer;
        exp.pop_back();

        if(exp == "0"){
            break;
        }

        exp.push_back('$');
        string num;
        stack<double> numS;
        stack<char> operatorS;

        for(unsigned int i = 0;i<exp.size();i++){
            if(exp[i] >='0' && exp[i] <='9'){
                num.push_back(exp[i]);
            }else if(exp[i] == ' '){
                if(num != ""){
                     // string --> double
                    numS.push(stod(num));
                    num="";
                }
            }
            else{
                if(exp[i] == '$'){
                    if(num != ""){
                        numS.push(stod(num));
                        num = "";
                    }
                }
                // 计算
                while(!operatorS.empty() && priority[operatorS.top()] >= priority[exp[i]]){
                    char oper = operatorS.top();
                    operatorS.pop();
                    double right = numS.top();
                    numS.pop();
                    double left = numS.top();
                    numS.pop();
                    switch (oper){
                        case '+':
                            numS.push(left + right);
                            break;
                        case '-':
                            numS.push(left - right);
                            break;
                        case '*':
                            numS.push(left * right);
                            break;
                        case '/':
                            numS.push(left / right);
                            break;
                    } 
                }

                operatorS.push(exp[i]);
            }

        }
        printf("%.2lf\n",numS.top());
    }

}
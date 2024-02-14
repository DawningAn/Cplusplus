#include <iostream>
#include <string>

using namespace std;

/*
写个算法，对2个小于1000000000的输入，求结果。 特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
*/
int main(){
    string a;
    string b;
    int result = 0;
    cin>>a>>b;
    
    for(int i = 0;i<a.size();i++){
        i = a[i] - '0';
        for(int j = 0;j<b.size();j++){
            j = b[j] - '0';
            result = result + (i*j);
        }
    }
    printf("%d\n",result);
    return 0;
}
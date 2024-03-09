#include <iostream>
#include <vector>

using namespace std;

/*
密码要求:

1.长度超过8位

2.包括大小写字母.数字.其它符号,以上四种至少三种

3.不能有长度大于2的包含公共元素的子串重复 （注：其他符号不含空格或换行）
1≤n≤100
输入描述：
一组字符串。

输出描述：
如果符合要求输出：OK，否则输出NG*/

// 021Abc9Abc1
bool check(string S){
    for(unsigned i =0;i<S.size() - 6;i++){
        for(unsigned j =i+3;j<S.size() - 3;j++){
            if(S.substr(i,3) == S.substr(j,3)){
                return false;
            }
        }
    }
    return true;

}
int main(){
    string S;
    
    while(cin >> S){
        if(S.size() < 8 ){
            cout <<"NG"<<endl;
            return 0;
        }
        vector<int> V(4);
        for(unsigned int  i=0;i<S.size();i++){
            if(S[i] >='A' && S[i]<='Z'){
                V[0] = 1;
            }else if(S[i] >='a' && S[i] <= 'z'){
                V[1] = 1;
            }else if(S[i] >= '0' && S[i] <= '9'){
                V[2] = 1;
            }else {
                V[3] = 1;
            }
        }

        // for(unsigned i = 0;i<4;i++){
        //     cout << V[i]<<' ';
        // }
        // 包含三种及以上即可
        int count = 0;
        for(unsigned int i=0;i<V.size();i++){
            if(V[i] == 1){
                count++;
            }
        }
        if(count <3){
            cout<<"NG"<<endl;
            return 0;
        }

        //判断有无不重复的长度大于2的子串
        if(!check(S)){
            cout <<"NG"<<endl;
        }else{
            cout <<"OK"<<endl;
        }

    }
}
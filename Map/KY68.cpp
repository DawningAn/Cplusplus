#include <iostream>
#include <map>

using namespace std;

/*
给出一个01字符串（长度不超过100），求其每一个子串出现的次数。
输入描述：
输入包含多行，每行一个字符串。
输出描述：
对每个字符串，输出它所有出现次数在1次以上的子串和这个子串出现的次数，输出按字典序排序。*/

int main(){
    string Str; 
    while(cin >> Str){
        map<string,int> Mp;

        for(int i = 0;i<Str.size();i++){
            for(int j = 1;j<=Str.size() - i;j++){
                Mp[Str.substr(i,j)]++;
            }
        }

        for(auto it = Mp.begin();it!=Mp.end();it++){
            if(it->second >1){
                cout <<it->first<<' '<<it->second<<endl;
            }
        }
    }

}
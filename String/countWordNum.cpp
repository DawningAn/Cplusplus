#include <iostream>

using namespace std;

int main(){
    char buf[26] = {0};
    string str;
    while(getline(cin,str)){
        for(int i = 0;i<str.size();i++){
            if(str[i] >= 'A' && str[i]<='Z'){
                buf[str[i] - 'A']++;
            }
        }
    }
    for(int i =0;i<26;i++){
        printf("%c:%d\n",'A'+i,buf[i]);
    }
    return 0;
}
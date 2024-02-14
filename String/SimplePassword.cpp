#include <iostream>

using namespace std;

/*
1.    起始行 - 一行，包括字符串 "START" 
2.    密文 - 一行，给出密文，密文不为空，而且其中的字符数不超过200 
3.    结束行 - 一行，包括字符串 "END" 在最后一组测试数据之后有一行，包括字符串 "ENDOFINPUT"。*/
int main(){
    string str;
    while(getline(cin,str)){
        if(str == "ENDOFINPUT"){
            break;
        }
        getline(cin,str);
        for(int i = 0;i<str.length();i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = (str[i] - 'A' - 5 + 26)%26 + 'A';
            }
        }
        cout <<str<<endl;
        getline(cin,str);


    }
    
    
}
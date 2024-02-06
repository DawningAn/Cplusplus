#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Student{
    string name;
    int score;
    int order;
}stu;


bool comp0(stu a, stu b){
    if(a.score == b.score){
        return a.order < b.order;
    }else{
        return a.score > b.score;
    }
}

bool comp1(stu a, stu b){
    if(a.score == b.score){
        return a.order < b.order;
    }else{
        return a.score < b.score;
    }
}

int main(){
    int N;
    int flag;
    while(scanf("%d%d",&N,&flag) != EOF) {
        stu s[N];
        for(int i=0; i<N; i++){
        cin >>s[i].name >>s[i].score;
        s[i].order = i+1;
        }

        if(flag == 0){
            sort(s,s+N,comp0);
        }
        if(flag == 1){
            sort(s,s+N,comp1);
        }

        for(int i=0; i<N; i++){
            cout << s[i].name << " " << s[i].score <<endl;
        }
    }
    return 0;
}
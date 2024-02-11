#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,int> findIndex;
    int n,m;

    int arr[100];
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
            findIndex[arr[i]] = i;
        }
        scanf("%d",&m);
        for(int i = 0;i<m;i++){
            int findnum;  // 待查找的元素
            scanf("%d",&findnum);
            if(findIndex.find(findnum) == findIndex.end()){
                printf("NO\n");
            }else{
                printf("YES\n");
            }
        }

    }
}
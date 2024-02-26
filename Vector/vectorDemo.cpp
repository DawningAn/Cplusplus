#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
    vector <int> v = {0,1};
    v.push_back(10);
    for(unsigned int i = 0;i<v.size();i++){
    printf("%d\n",v[i]);
    }
    printf("-----------------------------------\n");

    vector<int>::iterator it2 = v.begin() + 1;
    v.insert(it2,100);
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        printf("%d\n",*it);
    }

    return 0;
}
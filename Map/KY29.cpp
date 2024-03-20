#include <iostream>
#include <map>
using namespace std;

/*
幸运的是，你意外得到了一份北大图书馆的图书借阅记录，于是你挑灯熬夜地编程，想从中发现潜在的朋友。     
首先你对借阅记录进行了一番整理，把N个读者依次编号为1,2,…,N，把M本书依次编号为1,2,…,M。
同时，按照“臭味相投”的原则，和你喜欢读同一本书的人，就是你的潜在朋友。
你现在的任务是从这份借阅记录中计算出每个人有几个潜在朋友。
输入描述：
    每个案例第一行两个整数N,M，2 <= N ，M<= 200。
    接下来有N行，第i(i = 1,2,…,N)行每一行有一个数，表示读者i-1最喜欢的图书的编号P(1<=P<=M)
输出描述：
    每个案例包括N行，每行一个数，第i行的数表示读者i有几个潜在朋友。
    如果i和任何人都没有共同喜欢的书，则输出“BeiJu”（即悲剧，^ ^）*/
/*
输入：
4  5
2
3
2
1
复制
输出：
1
BeiJu
1
BeiJu*/
int main(){
    int N;
    int M;
    while(cin >>N>>M){
        map<int,int> likeBook;
        for(int i = 0;i<N;i++){
            int P;
            cin >>P;
            likeBook[i] = P;
        }
        
        for(int i = 0;i<N;i++){
            int count =0;
            int likeB = likeBook[i];
            for(auto it = likeBook.begin();it!=likeBook.end();it++){
                if(it->second == likeB){
                    count++;
                }
            }
            if(count == 1){
                cout <<"BeiJu"<<endl;
            }else{
                cout<<count-1<<endl;
            }
            
        }
    }
}
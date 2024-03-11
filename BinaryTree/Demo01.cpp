#include <iostream>
#include <queue>

using namespace std;

// 树节点的定义
struct TNode{
    int val;

    struct TNode* left;
    struct TNode* right;
};

struct QNode{
    TNode* parent;
    bool isLeftin;

};
void insertNode(TNode* &root,char data,queue <QNode *> &myQueue){
    if(data != '#'){
        TNode* newNode = new TNode;// 堆区创建节点
        newNode->val = data;
        // 把刚刚创建好的节点入队
        QNode * pQNode = new QNode;
        pQNode->parent = newNode;
        pQNode->isLeftin = false; 
        myQueue.push(pQNode);

        if(root == NULL){
            root = newNode;
        }else{
            QNode * pParent = myQueue.front();
            if(pParent->isLeftin == false){
                pParent->parent->left = newNode;
                pParent->isLeftin =true;
            }else{
                pParent->parent->right = newNode;
                myQueue.pop();
                delete pParent;  // 出队后
            }
        }
    }
    
}

int main(){
    TNode *root = NULL;  // 指向根节点
    char charlist[] = "abc##de#g##f###";
    queue<QNode *> myQueue;
    for(int i =0;charlist[i] != '\0';i++){
        insertNode(root,charlist[i], myQueue);

    }
}
#include <iostream>

using namespace std;


/*
二叉排序树，也称为二叉查找树。

现在给你N个关键字值各不相同的节点，要求你按顺序插入一个初始为空树的二叉排序树中
每次插入后成功后，求相应的父亲节点的关键字值，如果没有父亲节点，则输出-1。
输入描述：
输入包含多组测试数据，每组测试数据两行。 第一行，一个数字N（N<=100），表示待插入的节点数。 第二行，N个互不相同的正整数，表示要顺序插入节点的关键字值，这些值不超过10^8。
输出描述：
输出共N行，每次插入节点后，该节点对应的父亲节点的关键字值。*/

struct TreeNode{
    int data;
    TreeNode* leftchild;
    TreeNode* rightchild;
};
// 递归插入建立BST
void REinsertBST(TreeNode* root,int data){
    if(root == NULL){
        TreeNode* newNode = new TreeNode;
        newNode->data = data;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;
    }else{
        if(root->data > data){
            REinsertBST(root->leftchild,data);
        }else{
            REinsertBST(root->rightchild,data);
        }
    }
}

// 循环插入 (根据题意返回当前插入节点的父节点)
void insertBST(TreeNode* &root,int data){
    TreeNode* newNode = new TreeNode;
    newNode->data = data;
    newNode->leftchild = NULL;
    newNode->rightchild = NULL;

    if(root == NULL){
        root = newNode;
    }else{
        TreeNode* Pre = root;
        TreeNode* Cur;
        while(true){
            if(Pre->data >data){
            // 往左走
            Cur = Pre->leftchild;
            if(Cur == NULL){
                Pre->leftchild= newNode;
                cout<< Pre->data<<endl;
                break;
            }else{
                Pre = Cur;
            }
        }else{
            Cur = Pre->rightchild;
            if(Cur == NULL){
                Pre->rightchild = newNode;
                cout<< Pre->data<<endl;
                break;
            }else{
                Pre = Cur;
            }
        }
        }
        
    }

    if(root == newNode){
        cout <<-1<<endl;
    }
}

int main(){
    int N;
    while(cin >>N){
        TreeNode* root = NULL;
        int num;
        for(int i = 0;i<N;i++){
            cin>>num;
            insertBST(root,num);

        }
    }
}
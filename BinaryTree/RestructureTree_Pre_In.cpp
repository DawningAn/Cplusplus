#include <iostream>

using namespace std;

struct TreeNode{
    char data;
    TreeNode* leftchild;
    TreeNode* rightchild;
};
/*
利用先序和中序序列重建二叉树*/

TreeNode * rebuild(string PreOrder,string InOrder){
    // 先判空
    if(PreOrder.size() == 0){
        return NULL;
    }else{
        char rootdata = PreOrder[0];
        
        TreeNode *NewNode = new TreeNode;
        NewNode->data = rootdata;
        // 分割 先序
        int pos = InOrder.find(rootdata);  // 根在中序序列的下标
        // PreOrder.substr(1,pos);  // 先序 左子树
        // PreOrder.substr(pos+1);

        // // 分割中序
        // InOrder.substr(0,pos);
        // InOrder.substr(pos+1);

        NewNode->leftchild = rebuild(PreOrder.substr(1,pos),InOrder.substr(0,pos));  // 递归左子树
        NewNode->rightchild = rebuild(PreOrder.substr(pos+1),InOrder.substr(pos+1));  //递归右子树
        return NewNode;
    }
    
   
}

// 中序遍历
void InOrder1(TreeNode* root){
    if(root == NULL){
        return;
    }
    InOrder1(root->leftchild);
    cout<<root->data;
    InOrder1(root->rightchild);
}


// 后序遍历
void PostOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    PostOrder(root->leftchild);
    PostOrder(root->rightchild);
    cout<<root->data;
}
int main(){
    string PreOrder;  // abcdgfe badfgce
    string InOrder; // badfgce
    while(cin >> PreOrder >> InOrder){
        TreeNode* root = rebuild(PreOrder,InOrder);
        // InOrder1(root);
        PostOrder(root);
    }
    

}
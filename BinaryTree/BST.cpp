#include <iostream>


using namespace std;

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

// 循环插入
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
                break;
            }else{
                Pre = Cur;
            }
        }else{
            Cur = Pre->rightchild;
            if(Cur == NULL){
                Pre->rightchild = newNode;
                break;
            }else{
                Pre = Cur;
            }
        }
        }
        
    }
}


void InOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    InOrder(root->leftchild);
    cout<<root->data<<endl;
    InOrder(root->rightchild);
}
int main(){
    string SNum;
    while(cin >> SNum){
        TreeNode* root = NULL;
        for(unsigned i = 0;i<SNum.size();i++){
            insertBST(root,SNum[i]- '0');
        }

        InOrder(root);  // 中序有序
    }

}
#include <iostream>


using namespace std;

struct TreeNode{
    int data;
    TreeNode* leftchild;
    TreeNode* rightchild;
};
// 递归插入建立BST
void REinsertBST(TreeNode* &root,int data){
    if (root == NULL) {
        root = new TreeNode;
        root->leftchild = NULL;
        root->rightchild = NULL;
        root->data = data;
    }
    else
        if (data < root->data)
            REinsertBST(root->leftchild, data);
        else if(data > root->data)
            REinsertBST(root->rightchild, data);
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


// 先序遍历
void PreOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    PreOrder(root->leftchild);
    PreOrder(root->rightchild);
}

// 中序遍历
void InOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    InOrder(root->leftchild);
    cout<<root->data;
    InOrder(root->rightchild);
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
    string SNum;
    while(cin >> SNum){
        TreeNode* root = NULL;
        for(unsigned i = 0;i<SNum.size();i++){
            // insertBST(root,SNum[i]- '0');
            REinsertBST(root,SNum[i] - '0');
        }

        PreOrder(root);
        cout<<endl;
        InOrder(root);  // 中序有序
        cout<<endl;
        PostOrder(root);  // 后序有序
        cout<<endl;
    }

}
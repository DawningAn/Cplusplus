#include <iostream>
#include <string>
using namespace std;
struct TreeNode{
    char data;
    TreeNode* leftchild;
    TreeNode* rightchild;
};
/*
判断两序列是否为同一二叉搜索树序列
输入描述：
开始一个数n，(1<=n<=20) 表示有n个需要判断，n= 0 的时候输入结束。
接下去一行是一个序列，序列长度小于10，包含(0~9)的数字，没有重复数字，根据这个序列可以构造出一颗二叉搜索树。 
接下去的n行有n个序列，每个序列格式跟第一个序列一样，请判断这两个序列是否能组成同一颗二叉搜索树。
输出描述：
如果序列相同则输出YES，否则输出NO*/

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

string PreOrder(TreeNode* root){
    if(root == NULL){
        return "";
    }
    return root->data + PreOrder(root->leftchild) + PreOrder(root->rightchild);
}

string InOrder(TreeNode* root){
    if(root == NULL){
        return "";
    }
    return  InOrder(root->leftchild) + root->data + InOrder(root->rightchild);
}
int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        if(n == 0){
            break;
        }
        string S;
        cin >>S;
        TreeNode* root = NULL;
        for(unsigned i = 0;i<S.size();i++){
            insertBST(root,S[i]);
        }


        for(int i = 0;i<n;i++){
            string judgeS;
            cin >>judgeS;
            TreeNode* Jroot = NULL;
            for(unsigned i = 0;i<S.size();i++){
                insertBST(Jroot,judgeS[i]);
            }

            if(PreOrder(root) == PreOrder(Jroot) && InOrder(root) == InOrder(Jroot)){
                cout<<"YES"<<endl;
            }else{
                cout <<"NO"<<endl;
            }
            

        }
    }
}
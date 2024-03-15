#include <iostream>

using namespace std;
struct TreeNode{
    char data;
    TreeNode* leftchild;
    TreeNode* rightchild;
};
/*
编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）
例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树。
建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果。
输入描述：
输入包括1行字符串，长度不超过100。
输出描述：
可能有多组测试数据，对于每组数据， 输出将输入字符串建立二叉树后中序遍历的序列，每个字符后面都有一个空格。 每个输出结果占一行。*/

// 先序建树

TreeNode* PreBuild(string PreOrder,int &i){
    char c = PreOrder[i];
    i++;
    if(c == '#'){
        return NULL;
    }else{
        TreeNode* newNode = new TreeNode;
        newNode->data = c;
        newNode->leftchild = PreBuild(PreOrder,i);
        newNode->rightchild = PreBuild(PreOrder,i);
        return newNode;
    } 
}


void Inorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    Inorder(root->leftchild);
    cout<<root->data<<" ";
    Inorder(root->rightchild);
}
int main(){
    string PreOrder;
    while(cin >> PreOrder){
        int i =0;
        TreeNode* root = PreBuild(PreOrder,i);
        Inorder(root);
    }
    return 0;
}
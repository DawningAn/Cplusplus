#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char c) : data(c), left(NULL), right(NULL) {}
};


void Creat(TreeNode *&root,string str)
{
    queue<TreeNode*>Q;
    char c = str[0];
    if(c!='#')
    {
        root = new TreeNode(c);
        Q.push(root);
    }
    TreeNode *p=NULL;
    while(!Q.empty())
    {
        p=Q.front();
        Q.pop();
        c = str[1];
        if(c!='#')
        {
            root->left=new TreeNode(c);
            Q.push(p->left);
        }
        c = str[2];
        if(c!='#')
        {
            p->right=new TreeNode(c);
            Q.push(p->right);
        }
    }
}



//层序遍历
void LevelOrder(TreeNode* root) {
    queue<TreeNode*> pos;
    pos.push(root);

    while (pos.empty() == false) {
        TreeNode* pCur = pos.front();
        pos.pop();  //队首出队
        printf("%c", pCur->data);
        if (pCur->left != NULL) {
            pos.push(pCur->left);
        }
        if (pCur->right != NULL) {
            pos.push(pCur->right);
        }

    }
    cout << endl;
}

// 先序遍历
void PreOrder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%c", root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}


// 中序遍历
void InOrder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    InOrder(root->left);
    cout << root->data << ' ';
    InOrder(root->right);
}

// 后序遍历
void PostOrder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << ' ';
}

int main() 
{
    string str;
    // unsigned int index = 0;  // 作为遍历str的下标
    while (cin >>str) {
        TreeNode* root = NULL;

        Creat(root, str);

        // 先序：abcdgfe
        // 中序：badfgce
        // 后序：bfgdeca

        //abc##de#g##f###
        LevelOrder(root);
        cout<<endl;

        PreOrder(root);
        cout<<endl;

        InOrder(root);
        cout<<endl;

        PostOrder(root);
        cout << endl;

    }
    return 0;
}

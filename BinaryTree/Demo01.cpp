#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;
};

struct QueueNode{
    TreeNode* parent;   //记录父节点
	bool isLeft;    //记录父节点左孩子是否插入过
};


// 层次建树
void BuildTree(TreeNode* &proot, queue<QueueNode*>& pos, char data) {
	if (data != '#') {
		//申请一个树结点
		TreeNode* pNew = new TreeNode();
		pNew->data = data;

		//申请一个队列结点
		QueueNode* pQueueNode = new QueueNode();
		pQueueNode->parent = pNew;//在队列结点中保存刚创建的新结点位置
		pQueueNode->isLeft = false;//表示新结点的左孩子还没有访问过
		pos.push(pQueueNode);//新结点入队

		if (proot == NULL) {
			proot = pNew;
		}
		else {
			QueueNode* pCur = pos.front();//获取队列队首
			if (pCur->isLeft == false) {//看看队首的左孩子是否插入过
				pCur->parent->left = pNew;
				pCur->isLeft = true;
			}
			else {
				pCur->parent->right = pNew;//左右孩子都插入了，就出队
				pos.pop();
				delete pCur;
			}
		}
	}
	else {//新加入结点是空结点
		QueueNode* pCur = pos.front();
		if (pCur->isLeft == false) {
			pCur->parent->left = NULL;
			pCur->isLeft = true;
		}
		else {
			pCur->parent->right = NULL;
			pos.pop();
			delete pCur;
		}
	}
}

void LevelOrder(TreeNode* root){
    queue<TreeNode*> Q;
    Q.push(root);
    while(!Q.empty()){
        TreeNode* pCur = Q.front();
        Q.pop();
        cout<<pCur->data<<' ';
        if(pCur ->left != NULL){
            Q.push(pCur->left);
        }
        if(pCur->right != NULL){
            Q.push(pCur->right);
        }
    }
} 

// 先序遍历
void PreOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}

// 中序遍历
void InOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}

// 后序遍历
void PostOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}
int main(){
    TreeNode* root = NULL;
	char data;
	queue<QueueNode*> pos;
	while (1) {
		scanf("%c", &data);
		if (data == '\n') {//读到了一行的末尾
			break;
		}
		BuildTree(root, pos, data);
	}

    LevelOrder(root);
    cout<<endl;
    
    PreOrder(root);
    cout<<endl;

    InOrder(root);
    cout<<endl;

    PostOrder(root);


}
#include <iostream>

using namespace std;

struct ListNode
{
    int m_nKey;
    ListNode *m_pNext;
};
/*
输入一个单向链表，输出该链表中倒数第k个结点，链表的倒数第1个结点为链表的尾指针。

链表结点定义如下：
struct ListNode
{
    int m_nKey;
    ListNode* m_pNext;
};
正常返回倒数第k个结点指针，异常返回空指针.
要求：
(1)正序构建链表;
(2)构建后要忘记链表长度。

本题有多组样例输入。*/
void insertNode(ListNode *head, int x)
{
    ListNode *pNode = new ListNode;
    pNode->m_nKey = x;
    ListNode *tail = head;
    while (tail->m_pNext != NULL)
    {
        tail = tail->m_pNext;
    }
    tail->m_pNext = pNode;
    pNode->m_pNext = NULL;
    tail = pNode;
}

int main()
{

    int N;
    while (scanf("%d", &N) != EOF)
    {
        ListNode *head = new ListNode;
        head->m_pNext = NULL;
        int x;
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &x);
            insertNode(head, x);
        }
        // 找出倒数第k个节点
        int k;
        scanf("%d", &k);
        ListNode *fast = head->m_pNext;
        ListNode *slow = head->m_pNext;
        while (fast && k > 0)
        {
            k--;
            fast = fast->m_pNext;
        }

        while (fast)
        {
            fast = fast->m_pNext;
            slow = slow->m_pNext;
        }
        cout << slow->m_nKey<<endl;
    }
}
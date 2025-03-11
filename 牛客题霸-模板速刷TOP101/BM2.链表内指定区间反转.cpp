/**
 * @nc app=nowcoder id=b58434e200a648c589ca2063f1faf58c topic=295 question=654 lang=C++
 * 2025-03-10 10:33:59
 * https://www.nowcoder.com/practice/b58434e200a648c589ca2063f1faf58c?tpId=295&tqId=654
 * [BM2] 链表内指定区间反转
 */

/** @nc code=start */

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param head ListNode类 
     * @param m int整型 
     * @param n int整型 
     * @return ListNode类
     */
     
    void reverse(ListNode* node){
        ListNode* curNode = node;
        ListNode* preNode = nullptr;
        while(curNode){
            ListNode* temp=curNode->next;
            curNode->next=preNode;
            preNode=curNode;
            curNode=temp;
        }
    }
     
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        // write code here
        ListNode *newNode = new ListNode(-1);
        newNode->next = head;
        ListNode *curNode = newNode;
        int count=0;
        for(;count<m-1;++count){
            ListNode* curNode = curNode->next;
        }
        ListNode* lnode=curNode;
        for (; count < n + 1; ++count)
        {
            ListNode* curNode = curNode->next;
        }
        ListNode* rnode=curNode;
        
        ListNode* lcutNode = lnode->next;
        ListNode* rcutNode = rnode->next;
        
        lnode->next=nullptr;
        rnode->next=nullptr;

        reverse(lcutNode);
        lnode->next = rnode;
        lcutNode->next = rcutNode;
        return head;
    }
};

/** @nc code=end */

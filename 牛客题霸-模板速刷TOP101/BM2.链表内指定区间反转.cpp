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
     
     ListNode* reverse(ListNode* node) {
        if (!node) {
            return nullptr;
        }
        ListNode* preNode = nullptr;
        while (node) {
            ListNode* temp = node->next;
            node->next = preNode;
            preNode = node;
            node = temp;
        }
        return preNode;
    }
    
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        // write code here
        if (m >= n) {
            return head;
        }
        if (!head) {
            return nullptr;
        }
        int count = 0;
        ListNode* curNode = head;
        while (++count < m-1) {
            curNode = curNode->next;
        }
        ListNode* left1 = curNode;
        ListNode* left2 = curNode->next;
    
        while (++count <= n) {
            curNode = curNode->next;
        }
        ListNode* right = curNode->next;
        curNode->next = nullptr;
    
        left1->next = reverse(left2);
        left2->next = right;
        return head;
    }
};

/** @nc code=end */

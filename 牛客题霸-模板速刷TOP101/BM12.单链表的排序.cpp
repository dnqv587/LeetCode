/**
 * @nc app=nowcoder id=f23604257af94d939848729b1a5cda08 topic=295 question=1008897 lang=C++
 * 2025-03-12 00:15:05
 * https://www.nowcoder.com/practice/f23604257af94d939848729b1a5cda08?tpId=295&tqId=1008897
 * [BM12] 单链表的排序
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
     * @param head ListNode类 the head node
     * @return ListNode类
     */
    ListNode* sortInList(ListNode* head) {
        // write code here
        std::map<int, ListNode*> orderNode;
        while(head){
          orderNode.insert(std::make_pair(head->val, head));
          head = head->next;
        }
        ListNode* newNode = new ListNode(-1);
        ListNode* curNode = newNode;
        for(auto i: orderNode){
          curNode->next = i.second;
          curNode = curNode->next;
        }
        curNode->next = nullptr;
        return newNode->next;
    }
};

/** @nc code=end */

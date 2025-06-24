/**
 * @nc app=nowcoder id=c087914fae584da886a0091e877f2c79 topic=295 question=664 lang=C++
 * 2025-04-18 13:44:04
 * https://www.nowcoder.com/practice/c087914fae584da886a0091e877f2c79?tpId=295&tqId=664
 * [BM15] 删除有序链表中重复的元素-I
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
     * @return ListNode类
     */
    ListNode* deleteDuplicates(ListNode* head) {
        // write code here
        if(!head){
            return nullptr;
        }
        int preVal = head->val;
        ListNode* newNode = new ListNode(-1);
        ListNode* curNode = newNode;
        curNode->next = head;
        curNode = curNode->next;
        head = head->next;
        while(head){
            if(head->next->val == preVal){
                continue;
            }else{
                curNode->next = head;
                curNode = curNode->next;
            }
            head = head->next;
        }
        return newNode->next;
    }
};

/** @nc code=end */

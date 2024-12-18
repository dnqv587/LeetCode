/**
 * @nc app=nowcoder id=f9f78ca89ad643c99701a7142bd59f5d topic=13 question=39282 lang=C++
 * 2024-12-04 09:45:38
 * https://www.nowcoder.com/practice/f9f78ca89ad643c99701a7142bd59f5d?tpId=13&tqId=39282
 * [JZ18] 删除链表的节点
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
     * @param val int整型 
     * @return ListNode类
     */
    ListNode* deleteNode(ListNode* head, int val) {
        // write code here
        if(head->val == val)
        {
            return head->next;
        }
        ListNode* preNode = head;
        ListNode *currNode = head->next;
        while(currNode)
        {
            if(currNode->val == val)
            {
                preNode->next = currNode->next;
                break;
            }
            preNode = currNode;
            currNode = currNode->next;
        }
        return head;
    }
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=d0267f7f55b3412ba93bd35cfa8e8035 topic=13 question=11156 lang=C++
 * 2024-10-08 16:59:15
 * https://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035?tpId=13&tqId=11156
 * [JZ6] 从尾到头打印链表
 */

/** @nc code=start */

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        std::vector<int> result;
        while(head){
            result.push_back(head->val);
            head = head->next;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};


/** @nc code=end */

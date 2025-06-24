/**
 * @nc app=nowcoder id=650474f313294468a4ded3ce0f7898b9 topic=295 question=605 lang=C++
 * 2025-03-11 15:45:34
 * https://www.nowcoder.com/practice/650474f313294468a4ded3ce0f7898b9?tpId=295&tqId=605
 * [BM6] 判断链表中是否有环
 */

/** @nc code=start */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      ListNode* fastNode = head->next;
      if(!fastNode){
        return false;
      }
      ListNode* lowNode = head;
      while(lowNode){
        if(fastNode == lowNode){
          return true;
        }
        if(!fastNode->next || !fastNode->next->next){
          return false;
        }
        fastNode = fastNode->next->next;
        lowNode = lowNode->next;
      }
      return false;
    }
};

/** @nc code=end */

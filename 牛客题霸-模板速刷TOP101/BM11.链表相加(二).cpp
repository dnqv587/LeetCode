/**
 * @nc app=nowcoder id=c56f6c70fb3f4849bc56e33ff2a50b6b topic=295 question=1008772 lang=C++
 * 2025-03-11 19:56:45
 * https://www.nowcoder.com/practice/c56f6c70fb3f4849bc56e33ff2a50b6b?tpId=295&tqId=1008772
 * [BM11] 链表相加(二)
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
     * @param head1 ListNode类 
     * @param head2 ListNode类 
     * @return ListNode类
     */
    ListNode* addInList(ListNode* head1, ListNode* head2) {
        // write code here
        ListNode* curNode1 = head1;
        ListNode* curNode2 = head2;
        int val1 = 0;
        int val2 = 0;
        while (curNode1 || curNode2) {
          if (curNode1) {
            val1 = val1 * 10 + curNode1->val;
            curNode1 = curNode1->next;
          }
          if (curNode2) {
            val2 = val2 * 10 + curNode2->val;
            curNode2 = curNode2->next;
          }
        }
        int addVal = val1 + val2;
        int entry = 1;
        int temp = addVal/10;
        while (temp) {
          entry *=10;
          temp /=10;
        }
        ListNode* newNode = new ListNode(addVal/entry);
        ListNode* curNode = newNode;
        addVal %= entry;
        entry /=10;
        while (addVal) {
          newNode->next = new ListNode(addVal/entry);
          newNode=newNode->next;
          addVal %= entry;
          entry /=10;
        }
        return curNode;
      }
};

/** @nc code=end */

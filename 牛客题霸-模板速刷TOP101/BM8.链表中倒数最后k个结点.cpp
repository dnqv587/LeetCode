/**
 * @nc app=nowcoder id=886370fe658f41b498d40fb34ae76ff9 topic=295 question=1377477 lang=C++
 * 2025-03-11 17:20:58
 * https://www.nowcoder.com/practice/886370fe658f41b498d40fb34ae76ff9?tpId=295&tqId=1377477
 * [BM8] 链表中倒数最后k个结点
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
     * @param pHead ListNode类 
     * @param k int整型 
     * @return ListNode类
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        // write code here
        if (!pHead || !k) {
          return nullptr;
        }
        ListNode* fastNode = pHead;
        ListNode* slowNode = pHead;
        int count = 0;
        for (int i=0;i<k;++i) {
          if (!fastNode) {
            return nullptr;
          }
          fastNode = fastNode->next;
        }
        while (fastNode) {
          fastNode = fastNode->next;
          slowNode = slowNode->next;
        }
        return slowNode;
      }
};

/** @nc code=end */

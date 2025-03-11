/**
 * @nc app=nowcoder id=253d2c59ec3e4bc68da16833f79a38e4 topic=295 question=23449 lang=C++
 * 2025-03-11 16:03:10
 * https://www.nowcoder.com/practice/253d2c59ec3e4bc68da16833f79a38e4?tpId=295&tqId=23449
 * [BM7] 链表中环的入口结点
 */

/** @nc code=start */


/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
ListNode* EntryNodeOfLoop(ListNode* pHead) {
    if (!pHead) {
      return nullptr;
    }
    ListNode* slowNode = pHead;
    ListNode* fastNode = pHead;
    while (slowNode && fastNode) {
      slowNode = slowNode->next;
      if (fastNode->next) {
        fastNode = fastNode->next->next;
      }
      else {
        return nullptr;
      }
      if (fastNode == slowNode) {
        break;
      }
    }
    if (!slowNode || !fastNode) {
      return nullptr;
    }
    fastNode = pHead;
    while (fastNode != slowNode) {
      fastNode = fastNode->next;
      slowNode = slowNode->next;
    }
    return fastNode;
  }
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=253d2c59ec3e4bc68da16833f79a38e4 topic=13 question=11208 lang=C++
 * 2024-12-04 13:35:42
 * https://www.nowcoder.com/practice/253d2c59ec3e4bc68da16833f79a38e4?tpId=13&tqId=11208
 * [JZ23] 链表中环的入口结点
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
        std::set<int> entry;

        while(pHead)
        {
            if(entry.find(pHead->val) != entry.end())
            {
                return pHead;
            }
            entry.insert(pHead->val);
            pHead = pHead->next;
        }
        return nullptr;
    }
};

/** @nc code=end */

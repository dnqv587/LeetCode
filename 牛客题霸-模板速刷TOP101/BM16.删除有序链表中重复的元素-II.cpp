/**
 * @nc app=nowcoder id=71cef9f8b5564579bf7ed93fbe0b2024 topic=295 question=663 lang=C++
 * 2025-04-18 14:10:41
 * https://www.nowcoder.com/practice/71cef9f8b5564579bf7ed93fbe0b2024?tpId=295&tqId=663
 * [BM16] 删除有序链表中重复的元素-II
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
        std::multimap<int, ListNode*> nodeMap;
        while(head){
            nodeMap.insert(std::make_pair(head->val, head));
            head = head->next;
        }
        ListNode* newNode = new ListNode(-1);
        ListNode* curNode = newNode;
        for(auto i:nodeMap){
            if(nodeMap.count(i.first) == 1){
                curNode->next = i.second;
                curNode = curNode->next;
            }
        }
        curNode->next = nullptr;
        return newNode->next;
    }
};

/** @nc code=end */

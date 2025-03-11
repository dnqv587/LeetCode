/**
 * @nc app=nowcoder id=65cfde9e5b9b4cf2b6bafa5f3ef33fa6 topic=295 question=724 lang=C++
 * 2025-03-11 14:49:42
 * https://www.nowcoder.com/practice/65cfde9e5b9b4cf2b6bafa5f3ef33fa6?tpId=295&tqId=724
 * [BM5] 合并k个已排序的链表
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
     * @param lists ListNode类vector 
     * @return ListNode类
     */
    ListNode* merge(ListNode* pNode1,ListNode* pNode2) {
        if (!pNode1) {
            return pNode2;
        }
        if (!pNode2) {
            return pNode1;
        }
        ListNode* mergeNode=nullptr;
        if (pNode1->val < pNode2->val) {
          mergeNode=pNode1;
          pNode1=pNode1->next;
        }
        else {
          mergeNode=pNode2;
          pNode2=pNode2->next;
        }
        ListNode* curNode=mergeNode;
        while (pNode1 || pNode2) {
          if (!pNode1) {
            curNode->next=pNode2;
            pNode2=pNode2->next;
            curNode = curNode->next;
            continue;
          }
          if (!pNode2) {
            curNode->next=pNode1;
            pNode1=pNode1->next;
            curNode=curNode->next;
            continue;
          }
          if (pNode1->val < pNode2->val) {
            curNode->next=pNode1;
            pNode1=pNode1->next;
            curNode=curNode->next;
          }
          else {
            curNode->next=pNode2;
            pNode2=pNode2->next;
            curNode=curNode->next;
          }
        }
        return mergeNode;
      }
      
      ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        // write code here
        if(lists.empty()){
            return nullptr;
        }
        ListNode* mergeNode = lists.front();
        for (auto iter = lists.begin()+1;iter!=lists.end();++iter) {
          mergeNode = merge(mergeNode,*iter);
        }
        return mergeNode;
      }
};

/** @nc code=end */

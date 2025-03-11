/**
 * @nc app=nowcoder id=d8b6b4358f774294a89de2a6ac4d9337 topic=295 question=23267 lang=C++
 * 2025-03-11 14:03:41
 * https://www.nowcoder.com/practice/d8b6b4358f774294a89de2a6ac4d9337?tpId=295&tqId=23267
 * [BM4] 合并两个排序的链表
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
     * @param pHead1 ListNode类 
     * @param pHead2 ListNode类 
     * @return ListNode类
     */
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        // write code here
        ListNode* mergeNode = new ListNode(-1);
        ListNode* curNode = mergeNode;
        while(pHead1||pHead2){
            if(!pHead1){
                curNode->next = pHead2;
                pHead2=pHead2->next;
                curNode=curNode->next;
                continue;
            }
            if(!pHead2){
                curNode->next = pHead1;
                pHead1=pHead1->next;
                curNode=curNode->next;
                continue;
            }
            if(pHead1->val < pHead2->val){
                curNode->next = pHead1;
                pHead1=pHead1->next;
            }
            else{
                curNode->next = pHead2;
                pHead2=pHead2->next;
            }
            curNode=curNode->next;
        }
        return mergeNode->next;
    }
};

/** @nc code=end */

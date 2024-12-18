/**
 * @nc app=nowcoder id=d8b6b4358f774294a89de2a6ac4d9337 topic=13 question=11169 lang=C++
 * 2024-12-06 09:24:56
 * https://www.nowcoder.com/practice/d8b6b4358f774294a89de2a6ac4d9337?tpId=13&tqId=11169
 * [JZ25] 合并两个排序的链表
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
        if(!pHead1)
        {
            return pHead2;
        }
        if(!pHead2)
        {
            return pHead1;
        }
        ListNode *resultNode = nullptr;
        ListNode *currNode = nullptr;
        if (pHead1->val < pHead2->val)
        {
            currNode = new ListNode(pHead1->val);
            pHead1 = pHead1->next;
        }
        else
        {   
            currNode = new ListNode(pHead2->val);
            pHead2 = pHead2->next;
        }

        resultNode = currNode;

        while(pHead1 || pHead2)
        {
            if(pHead1 && pHead2)
            {
                if( pHead1->val < pHead2->val)
                {
                    currNode->next = pHead1;
                    pHead1 = pHead1->next;
                }
                else
                {
                    currNode->next = pHead2;
                    pHead2 = pHead2->next;
                }
            }
            else
            {
                if(pHead1)
                {
                    currNode->next = pHead1;
                    pHead1 = pHead1->next;
                }

                if(pHead2)
                {
                    currNode->next = pHead2;
                    pHead2 = pHead2->next;
                }
            }
            currNode = currNode->next;
        }

        return resultNode;
    }
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=886370fe658f41b498d40fb34ae76ff9 topic=13 question=11167 lang=C++
 * 2024-12-04 11:13:09
 * https://www.nowcoder.com/practice/886370fe658f41b498d40fb34ae76ff9?tpId=13&tqId=11167
 * [JZ22] 链表中倒数最后k个结点
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
        if(k==0)
        {
            return nullptr;
        }
        ListNode *currNode = pHead;
        int n = 0;

        while(currNode)
        {
            currNode = currNode->next;
            ++n;
        }
        if(k>n)
        {
            return nullptr;
        }
        
        for(int i = 0; i < n-k;++i)
        {
            pHead = pHead->next;
        }
        return pHead;
    }
};

/** @nc code=end */

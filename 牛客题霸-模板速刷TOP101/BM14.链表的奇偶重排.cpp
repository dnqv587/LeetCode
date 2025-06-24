/**
 * @nc app=nowcoder id=02bf49ea45cd486daa031614f9bd6fc3 topic=295 question=1073463 lang=C++
 * 2025-03-13 22:54:32
 * https://www.nowcoder.com/practice/02bf49ea45cd486daa031614f9bd6fc3?tpId=295&tqId=1073463
 * [BM14] 链表的奇偶重排
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
    ListNode* oddEvenList(ListNode* head) {
        // write code here
        if(!head){
            return nullptr;
        }
        std::vector<ListNode*> oddVec;
        std::vector<ListNode*> evenVec;
        int count =0;
        while(head){
            if(++count%2==0){
                evenVec.push_back(head);
            }else{
                oddVec.push_back(head);
            }
            head = head->next;
        }
        ListNode* newNode = new ListNode(-1);
        ListNode* curNode = newNode;
        for(auto i:oddVec){
            curNode->next=i;
            curNode=curNode->next;
        }
        for(auto i:evenVec){
            curNode->next=i;
            curNode=curNode->next;
        }
        curNode->next=nullptr;
        return newNode->next;
    }
};

/** @nc code=end */

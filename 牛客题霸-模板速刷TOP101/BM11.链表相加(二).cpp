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
     
    ListNode* reverse(ListNode* node){
      if(!node){
        return nullptr;
      }
      ListNode* curNode = node;
      ListNode* preNode = nullptr;
      while(curNode){
        ListNode* temp = curNode->next;
        curNode->next = preNode;
        preNode = curNode;
        curNode = temp;
      }
      return preNode;
    }
    ListNode* addInList(ListNode* head1, ListNode* head2) {
      // write code here
      ListNode* node1=reverse(head1);
      ListNode* node2=reverse(head2);
      ListNode* newNode = new ListNode(-1);
      ListNode* curNode = newNode;
      int preVal = 0;
      while(node1 || node2){
        int val = (node1?node1->val:0 ) + (node2?node2->val:0);
        curNode->next = new ListNode((val + preVal) %10 );
        curNode = curNode->next;
        preVal = (val + preVal)/10;
        
        node1 = node1?node1->next:node1;
        node2 = node2?node2->next:node2;
      }
      if(preVal){
        curNode->next = new ListNode(preVal);
      }
      return reverse(newNode->next);
    }
};

/** @nc code=end */

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
    ListNode* addInList(ListNode* head1, ListNode* head2) {
        // write code here
        ListNode* curNode1 = head1;
        ListNode* preNode1 = nullptr;
        ListNode* curNode2 = head2;
        ListNode* preNode2 = nullptr;
        while(curNode1 || curNode2){
          if(curNode1){
            ListNode* tempNode = curNode1->next;
            curNode1->next = preNode1;
            preNode1 = curNode1;
            curNode1 = tempNode;
          }
          if(curNode2){
            ListNode* tempNode = curNode2->next;
            curNode2->next = preNode2;
            preNode2 = curNode2;
            curNode2 = tempNode;
          }
        }
        ListNode* newNode = preNode1;
        ListNode* curNode = newNode; 
        int next = 0;
        while(preNode1 || preNode2){
          int curVal=0;
          if(preNode1){
            curVal += preNode1->val;
            preNode1 = preNode1->next;
          }
          if(preNode2){
            curVal += preNode2->val;
            preNode2 = preNode2->next;
          }
          curVal +=next;
          curNode->val = curVal%10;
          curNode->next = preNode1?preNode1:preNode2;
          next = curVal/10;
          if(!curNode->next){
            if(next){
              curNode->next = new ListNode(next);
            }
          }
          else{
            curNode = curNode->next;
          }
        }
        ListNode* newPreNode = nullptr;
        while(newNode){
          ListNode* temp = newNode->next;
          newNode->next = newPreNode;
          newPreNode = newNode;
          newNode = temp;
        }
        return newPreNode;
      }
};

/** @nc code=end */

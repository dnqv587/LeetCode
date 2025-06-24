/**
 * @nc app=nowcoder id=3fed228444e740c8be66232ce8b87c2f topic=295 question=1008769 lang=C++
 * 2025-03-13 22:48:45
 * https://www.nowcoder.com/practice/3fed228444e740c8be66232ce8b87c2f?tpId=295&tqId=1008769
 * [BM13] 判断一个链表是否为回文结构
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
     * @param head ListNode类 the head
     * @return bool布尔型
     */
    bool isPail(ListNode* head) {
        // write code here
        std::string str;
        while(head){
            str.push_back(head->val);
            head = head->next;
        }
        std::string rstr(str.rbegin(), str.rend());
        return str == rstr;
    }
};

/** @nc code=end */

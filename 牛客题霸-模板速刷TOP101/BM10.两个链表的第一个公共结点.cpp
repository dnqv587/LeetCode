/**
 * @nc app=nowcoder id=6ab1d9a29e88450685099d45c9e31e46 topic=295 question=23257 lang=C++
 * 2025-03-11 19:01:32
 * https://www.nowcoder.com/practice/6ab1d9a29e88450685099d45c9e31e46?tpId=295&tqId=23257
 * [BM10] 两个链表的第一个公共结点
 */

/** @nc code=start */

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
	if (!pHead1 || !pHead2) {
	  return nullptr;
	}
	ListNode* curNode1=pHead1;
	ListNode* curNode2=pHead2;
	while(curNode1 != curNode2){
		curNode1 = curNode1?curNode1->next:pHead2;
		curNode2=curNode2?curNode2->next:pHead1;
	}
	return curNode2;
  }
};


/** @nc code=end */

/**
 * @nc app=nowcoder id=947f6eb80d944a84850b0538bf0ec3a5 topic=295 question=23253 lang=C++
 * 2025-03-14 15:39:13
 * https://www.nowcoder.com/practice/947f6eb80d944a84850b0538bf0ec3a5?tpId=295&tqId=23253
 * [BM30] 二叉搜索树与双向链表
 */

/** @nc code=start */

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
	TreeNode* min(TreeNode* node){
		while(node && node->left){
			node = node->left;
		}
		return node;
	}
	
	TreeNode* max(TreeNode* node){
		while(node && node->right){
			node = node->right;
		}
		return node;
	}
	
	void del(TreeNode* node){
		if(!node){
			return;
		}
		if(node->left && node->right){
			
		}
		else{
			
		}
	}
	
    TreeNode* Convert(TreeNode* pRootOfTree) {
        
    }
};


/** @nc code=end */

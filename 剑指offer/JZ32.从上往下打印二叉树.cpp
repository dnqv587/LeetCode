/**
 * @nc app=nowcoder id=7fe2212963db4790b57431d9ed259701 topic=13 question=11175 lang=C++
 * 2024-12-30 13:32:56
 * https://www.nowcoder.com/practice/7fe2212963db4790b57431d9ed259701?tpId=13&tqId=11175
 * [JZ32] 从上往下打印二叉树
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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
		std::vector<int> result;
		std::queue<TreeNode *> que;
		que.push(root);
		while(!que.empty())
		{
			TreeNode *node = que.front();
			que.pop();
			if(!node)
				continue;
			result.push_back(node->val);
			que.push(node->left);
			que.push(node->right);
		}
		return result;
	}
};


/** @nc code=end */

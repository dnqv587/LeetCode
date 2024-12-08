/**
 * @nc app=nowcoder id=6e196c44c7004d15b1610b9afca8bd88 topic=13 question=11170 lang=C++
 * 2024-12-07 20:45:38
 * https://www.nowcoder.com/practice/6e196c44c7004d15b1610b9afca8bd88?tpId=13&tqId=11170
 * [JZ26] 树的子结构
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

	bool compare(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if(!pRoot2)
		{
			return true;
		}
		if(!pRoot1)
		{
			return false;
		}

		if(pRoot1->val == pRoot2->val)
		{
			return compare(pRoot1->left,pRoot2->left) && compare(pRoot1->right,pRoot2->right);
		}
		return false;
	}

    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
		
		if(!pRoot1 || !pRoot2)
		{
			return false;
		}
		if(pRoot1->val == pRoot2->val)
		{
			TreeNode* node1= pRoot1;
			TreeNode* node2= pRoot2;
			bool ret = compare(node1,node2);
			if(ret)
			{
				return ret;
			}
		}
		return HasSubtree(pRoot1->left,pRoot2) || HasSubtree(pRoot1->right,pRoot2);
    }
};


/** @nc code=end */

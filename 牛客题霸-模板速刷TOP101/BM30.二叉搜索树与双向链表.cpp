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
	void inOrder(TreeNode* node, std::vector<TreeNode*>& vec){
		if(!node){
			return;
		}
		inOrder(node->left, vec);
		vec.push_back(node);
		inOrder(node->right, vec);
	}
	
    TreeNode* Convert(TreeNode* pRootOfTree) {
    	if(!pRootOfTree){
    		return nullptr;
    	}
    	std::vector<TreeNode*> vec;
        inOrder(pRootOfTree, vec);
        for(auto iter=vec.begin();iter<vec.end();++iter){
        	if( iter+1 == vec.end()){
        		break;
        	}
        	else{
        		(*iter)->right = *(iter+1);
				(*(iter+1))->left = *iter;
        	}
        }
        return vec.front();
    }
};


/** @nc code=end */

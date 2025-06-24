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
    
    void inOrder(std::vector<TreeNode*>& vec, TreeNode* node){
        if(!node){
            return;
        }
        inOrder(vec, node->left);
        vec.push_back(node);
        inOrder(vec, node->right);
    }
	
    TreeNode* Convert(TreeNode* pRootOfTree) {
        if(!pRootOfTree){
            return nullptr;
        }
        std::vector<TreeNode*> vec;
        inOrder(vec, pRootOfTree);
        for(auto i=vec.begin();i!=vec.end();++i){
            TreeNode* node = *i;
            node->left = i==vec.begin()?nullptr:*(i-1);
            node->right =  (i+1)==vec.end()?nullptr:*(i+1);
        }
        return vec.front();
    }
};


/** @nc code=end */

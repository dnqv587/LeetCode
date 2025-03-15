/**
 * @nc app=nowcoder id=a69242b39baf45dea217815c7dedb52b topic=295 question=2288088 lang=C++
 * 2025-03-15 14:08:55
 * https://www.nowcoder.com/practice/a69242b39baf45dea217815c7dedb52b?tpId=295&tqId=2288088
 * [BM34] 判断是不是二叉搜索树
 */

/** @nc code=start */

/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param root TreeNode类 
     * @return bool布尔型
     */
    
    bool inOrder(TreeNode* node, std::vector<TreeNode*>& vec){
        if(!node){
            return true;
        }
        if(!inOrder(node->left, vec)){
            return false;
        }
        if(!vec.empty()){
            if(vec.back()->val >= node->val){
                return false;
            }
        }
        vec.push_back(node);
        
        return inOrder(node->right, vec);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root){
            return false;
        }
        // write code here
        std::vector<TreeNode*> vec;
        return inOrder(root, vec);
    }
};

/** @nc code=end */

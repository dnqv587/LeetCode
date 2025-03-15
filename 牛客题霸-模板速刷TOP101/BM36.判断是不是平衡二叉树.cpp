/**
 * @nc app=nowcoder id=8b3b95850edb4115918ecebdf1b4d222 topic=295 question=23250 lang=C++
 * 2025-03-15 16:23:33
 * https://www.nowcoder.com/practice/8b3b95850edb4115918ecebdf1b4d222?tpId=295&tqId=23250
 * [BM36] 判断是不是平衡二叉树
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
     * @param pRoot TreeNode类 
     * @return bool布尔型
     */
    
    int depth(TreeNode* node){
        if(!node){
            return 0;
        }
        return std::max(depth(node->left), depth(node->right)) + 1;
    }
     
    bool IsBalanced_Solution(TreeNode* pRoot) {
        // write code here
        if(!pRoot){
            return true;
        }
        
        if(std::abs(depth(pRoot->left)-depth(pRoot->right))>1){
            return false;
        }
        return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
    }
};

/** @nc code=end */

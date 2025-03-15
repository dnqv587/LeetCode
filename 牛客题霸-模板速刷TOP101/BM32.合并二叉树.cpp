/**
 * @nc app=nowcoder id=7298353c24cc42e3bd5f0e0bd3d1d759 topic=295 question=1025038 lang=C++
 * 2025-03-15 11:45:53
 * https://www.nowcoder.com/practice/7298353c24cc42e3bd5f0e0bd3d1d759?tpId=295&tqId=1025038
 * [BM32] 合并二叉树
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
     * @param t1 TreeNode类 
     * @param t2 TreeNode类 
     * @return TreeNode类
     */

     
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        // write code here
        if(!t1 && !t2){
            return nullptr;
        }
        if(!t1){
            return t2;
        }
        if(!t2){
            return t1;
        }
        t1->val += t2->val;
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        
        return t1;
    }
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=d9820119321945f588ed6a26f0a6991f topic=295 question=2290592 lang=C++
 * 2025-03-15 16:35:07
 * https://www.nowcoder.com/practice/d9820119321945f588ed6a26f0a6991f?tpId=295&tqId=2290592
 * [BM37] 二叉搜索树的最近公共祖先
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
     * @param p int整型 
     * @param q int整型 
     * @return int整型
     */
    int lowestCommonAncestor(TreeNode* root, int p, int q) {
        // write code here

        while(root){
            int val = root->val;
            if(p<val && q<val){
                root = root->left;
            }else if(p>val && q>val){
                root = root->right;
            }else{
                return val;
            } 
        }

        return -1;
    }
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=5e2135f4d2b14eb8a5b06fab4c938635 topic=295 question=2291302 lang=C++
 * 2025-03-14 14:43:26
 * https://www.nowcoder.com/practice/5e2135f4d2b14eb8a5b06fab4c938635?tpId=295&tqId=2291302
 * [BM23] 二叉树的前序遍历
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
     * @return int整型vector
     */
     
     void visit(std::vector<int>& vec, TreeNode* node){
         if(!node){
             return;
         }
         vec.push_back(node->val);
         visit(vec, node->left);
         visit(vec, node->right);
     }
     
    vector<int> preorderTraversal(TreeNode* root) {
        // write code here
        std::vector<int> vec;
        visit(vec, root);
        return vec;
    }
};

/** @nc code=end */

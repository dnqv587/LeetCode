/**
 * @nc app=nowcoder id=1291064f4d5d4bdeaefbf0dd47d78541 topic=295 question=2291301 lang=C++
 * 2025-03-14 15:36:38
 * https://www.nowcoder.com/practice/1291064f4d5d4bdeaefbf0dd47d78541?tpId=295&tqId=2291301
 * [BM25] 二叉树的后序遍历
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
     
    void visit(TreeNode* node, std::vector<int>& vec){
         if(!node){
             return;
         }
         visit(node->left, vec);
         visit(node->right, vec);
         vec.push_back(node->val);
     }
     
    vector<int> postorderTraversal(TreeNode* root) {
        // write code here
        std::vector<int> vec;
        visit(root, vec);
        return vec;
    }
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=0bf071c135e64ee2a027783b80bf781d topic=295 question=1512964 lang=C++
 * 2025-03-14 15:35:36
 * https://www.nowcoder.com/practice/0bf071c135e64ee2a027783b80bf781d?tpId=295&tqId=1512964
 * [BM24] 二叉树的中序遍历
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
         vec.push_back(node->val);
         visit(node->right, vec);
     }
     
    vector<int> inorderTraversal(TreeNode* root) {
        // write code here
        std::vector<int> vec;
        visit(root, vec);
        return vec;
    }
};

/** @nc code=end */

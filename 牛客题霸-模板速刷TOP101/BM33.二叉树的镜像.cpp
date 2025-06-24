/**
 * @nc app=nowcoder id=a9d0ecbacef9410ca97463e4a5c83be7 topic=295 question=1374963 lang=C++
 * 2025-03-15 12:01:15
 * https://www.nowcoder.com/practice/a9d0ecbacef9410ca97463e4a5c83be7?tpId=295&tqId=1374963
 * [BM33] 二叉树的镜像
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
     * @return TreeNode类
     */
     void swap(TreeNode* node){
         if(!node){
             return;
         }
         swap(node->left);
         swap(node->right);
         std::swap(node->left, node->right);
     }
    
    TreeNode* Mirror(TreeNode* pRoot) {
        // write code here
        if(!pRoot){
            return nullptr;
        }
        swap(pRoot);
        return pRoot;
    }
};

/** @nc code=end */

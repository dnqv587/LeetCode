/**
 * @nc app=nowcoder id=8a19cbe657394eeaac2f6ea9b0f6fcf6 topic=295 question=23282 lang=C++
 * 2025-03-15 17:09:14
 * https://www.nowcoder.com/practice/8a19cbe657394eeaac2f6ea9b0f6fcf6?tpId=295&tqId=23282
 * [BM40] 重建二叉树
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
     * @param preOrder int整型vector 
     * @param vinOrder int整型vector 
     * @return TreeNode类
     */
    TreeNode* reConstructBinaryTree(vector<int>& preOrder, vector<int>& vinOrder) {
        // write code here
        if(preOrder.empty() || vinOrder.empty()){
            return nullptr;
        }
        
        auto pos = std::find(vinOrder.begin(),vinOrder.end(),preOrder.front());
        if(pos == vinOrder.end()){
            return nullptr;
        }
        TreeNode* node = new TreeNode(preOrder.front());
        int lsize = std::distance(vinOrder.begin(),pos);
        std::vector<int> lpvec(preOrder.begin()+1,preOrder.begin()+1+lsize);
        std::vector<int> lvvec(vinOrder.begin(),pos);
        node->left=reConstructBinaryTree(lpvec,lvvec);
        //int rsize = std::distance(pos,vinOrder.end());
        std::vector<int> rpvec(preOrder.begin()+lsize+1,preOrder.end());
        std::vector<int> rvvec(pos+1,vinOrder.end());
        node->right=reConstructBinaryTree(rpvec,rvvec);
        return node;
    }
};

/** @nc code=end */

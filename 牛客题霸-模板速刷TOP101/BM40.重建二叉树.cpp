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
        int pre = preOrder.front();
        auto mid = std::find(vinOrder.begin(), vinOrder.end(), pre);
        if(mid == vinOrder.end()){
            return nullptr;
        }
        TreeNode* node = new TreeNode(pre);
        int len = std::distance(vinOrder.begin(), mid);
        std::vector<int> lpreVec(preOrder.begin()+1, preOrder.begin()+len+1);
        std::vector<int> lvinVec(vinOrder.begin(), mid);
        std::vector<int> rpreVec(preOrder.begin()+len+1, preOrder.end());
        std::vector<int> rvinVec(mid+1, vinOrder.end());
        node->left = reConstructBinaryTree(lpreVec, lvinVec);
        node->right = reConstructBinaryTree(rpreVec, rvinVec);
        return node;
    }
};

/** @nc code=end */

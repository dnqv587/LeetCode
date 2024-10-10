/**
 * @nc app=nowcoder id=8a19cbe657394eeaac2f6ea9b0f6fcf6 topic=13 question=11157 lang=C++
 * 2024-10-09 16:31:35
 * https://www.nowcoder.com/practice/8a19cbe657394eeaac2f6ea9b0f6fcf6?tpId=13&tqId=11157
 * [JZ7] 重建二叉树
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
        if(preOrder.empty() || vinOrder.empty())
        {
            return nullptr;
        }
        //创建节点
        TreeNode *root = new TreeNode(preOrder.front());
        //查找中序遍历，获取该节点的左右子树
        auto iter = std::find(vinOrder.begin(),vinOrder.end(),preOrder.front());
        //获取左子树的个数，从而截取前序遍历下序列
        int count = std::distance(vinOrder.begin(), iter);
        //创建左子树的前序遍历序列
        std::vector<int> lpre(preOrder.begin() + 1, preOrder.begin() + 1 + count);
        // 创建左子树的中序遍历序列
        std::vector<int> lvin(vinOrder.begin(), iter);
        //递归创建左子树
        root->left = reConstructBinaryTree(lpre, lvin);

       //创建右子树的前序遍历序列
        std::vector<int> rpre(preOrder.begin() + 1 + count,preOrder.end());
        // 创建右子树的中序遍历序列
        std::vector<int> rvin(iter,vinOrder.end());
        //递归创建右子树
        root->right = reConstructBinaryTree(rpre, rvin);

        return root;
    }
};

/*
前序遍历可以获取到根节点，根据根节点查找中序遍历，获取到该节点的左右子树，
以递归的方式将左右子树截取出来，最后返回根节点
*/

/** @nc code=end */

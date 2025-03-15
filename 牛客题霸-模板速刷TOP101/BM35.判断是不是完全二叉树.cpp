/**
 * @nc app=nowcoder id=8daa4dff9e36409abba2adbe413d6fae topic=295 question=2299105 lang=C++
 * 2025-03-15 15:06:52
 * https://www.nowcoder.com/practice/8daa4dff9e36409abba2adbe413d6fae?tpId=295&tqId=2299105
 * [BM35] 判断是不是完全二叉树
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
     * @return bool布尔型
     */
    bool isCompleteTree(TreeNode* root) {
        // write code here
        if(!root){
            return true;
        }
        std::queue<TreeNode*> que;
        que.push(root);
        bool flag=false;
        while(!que.empty()){
            int size = que.size();
            for(int i=0;i<size;++i){
                auto* node = que.front();
                que.pop();
                if(node){
                    if(flag){ //空节点在层序遍历的中间
                        return false;
                    }
                    que.push(node->left);
                    que.push(node->right);
                }else{
                    flag=true;//标记层序遍历的空节点出现的位置
                }
            }
        }
        return true;
    }
};

/** @nc code=end */

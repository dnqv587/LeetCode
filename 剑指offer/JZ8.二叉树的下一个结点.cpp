/**
 * @nc app=nowcoder id=9023a0c988684a53960365b889ceaf5e topic=13 question=11210 lang=C++
 * 2024-10-13 17:45:02
 * https://www.nowcoder.com/practice/9023a0c988684a53960365b889ceaf5e?tpId=13&tqId=11210
 * [JZ8] 二叉树的下一个结点
 */

/** @nc code=start */

/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/

/*
1、有右子树，下一结点是右子树中的最左结点
2、无右子树，且结点是该结点父结点的左子树，则下一结点是该结点的父结点
3、无右子树，且结点是该结点父结点的右子树，则一直沿着父结点追朔，直到找到某
    个结点是其父结点的左子树，如果存在这样的结点，那么这个结点的父结点就是我们要找的下一结点。
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode) {
        if(pNode == nullptr)
        {
            return nullptr;
        }

        
        
    }
};


/** @nc code=end */

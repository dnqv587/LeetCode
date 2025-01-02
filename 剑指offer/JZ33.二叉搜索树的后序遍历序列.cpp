/**
 * @nc app=nowcoder id=a861533d45854474ac791d90e447bafd topic=13 question=11176 lang=C++
 * 2024-12-30 13:50:07
 * https://www.nowcoder.com/practice/a861533d45854474ac791d90e447bafd?tpId=13&tqId=11176
 * [JZ33] 二叉搜索树的后序遍历序列
 */

/** @nc code=start */

class Solution {
public:
    bool verify(const std::vector<int>& vec,int l,int r)
    {
        if(l >= r)
            return true;
        int root = vec[r];
        int i = 0;
        for (; i < r;++i)
        {
            if(vec[i]>root)
                break;
        }
        int j = i;
        for (; j < r;++j)
        {
            if(vec[j]<root)
                return false;
        }

        return verify(vec, l, i-1) && verify(vec, i, r-1);
    }

    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.size() == 0)
        {
            return false;
        }
        return verify(sequence,0,sequence.size() -1);
    }
};

/** @nc code=end */

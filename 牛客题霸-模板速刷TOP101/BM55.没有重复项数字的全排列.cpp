/**
 * @nc app=nowcoder id=4bcf3081067a4d028f95acee3ddcd2b1 topic=295 question=701 lang=C++
 * 2025-04-23 09:52:34
 * https://www.nowcoder.com/practice/4bcf3081067a4d028f95acee3ddcd2b1?tpId=295&tqId=701
 * [BM55] 没有重复项数字的全排列
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param num int整型vector 
     * @return int整型vector<vector<>>
     */
     
    void recursion(std::vector<std::vector<int>>& res, vector<int>& num, int idx) {
        if(idx == num.size()-1){
            res.push_back(num);
            return;
        }
        for(int i=idx;i<num.size();++i){
            std::swap(num[i], num[idx]);
            recursion(res, num, idx+1);
        }
    }
    vector<vector<int> > permute(vector<int>& num) {
        // write code here
        std::vector<std::vector<int>> vec;
        recursion(vec, num, 0);
        return vec;
    }
};

/** @nc code=end */

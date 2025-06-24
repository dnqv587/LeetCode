/**
 * @nc app=nowcoder id=a43a2b986ef34843ac4fdd9159b69863 topic=295 question=700 lang=C++
 * 2025-04-23 13:47:30
 * https://www.nowcoder.com/practice/a43a2b986ef34843ac4fdd9159b69863?tpId=295&tqId=700
 * [BM56] 有重复项数字的全排列
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
    
    void recursion(std::vector<std::vector<int>>& res, std::vector<int>&num, int idx){
        if(idx>= num.size()-1){
            res.push_back(num);
            return;
        }
        for(int i=idx;i<num.size();++i){
            std::swap(num[i], num[idx]);
            recursion(res, num, idx+1);
        }
    }
     
    vector<vector<int> > permuteUnique(vector<int>& num) {
        // write code here
        std::vector<std::vector<int>> vec;
        recursion(vec, num, 0);
        return vec;
    }
};

/** @nc code=end */

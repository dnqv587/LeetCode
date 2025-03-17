/**
 * @nc app=nowcoder id=6a296eb82cf844ca8539b57c23e6e9bf topic=295 question=23263 lang=C++
 * 2025-03-17 10:55:55
 * https://www.nowcoder.com/practice/6a296eb82cf844ca8539b57c23e6e9bf?tpId=295&tqId=23263
 * [BM46] 最小的K个数
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param input int整型vector 
     * @param k int整型 
     * @return int整型vector
     */
    vector<int> GetLeastNumbers_Solution(vector<int>& input, int k) {
        // write code here
        std::sort(input.begin(), input.end(), std::less());
        return vector<int>{input.begin(), input.begin()+k};
    }
};

/** @nc code=end */

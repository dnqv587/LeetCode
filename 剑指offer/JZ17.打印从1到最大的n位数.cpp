/**
 * @nc app=nowcoder id=4436c93e568c48f6b28ff436173b997f topic=13 question=39281 lang=C++
 * 2024-12-03 23:39:32
 * https://www.nowcoder.com/practice/4436c93e568c48f6b28ff436173b997f?tpId=13&tqId=39281
 * [JZ17] 打印从1到最大的n位数
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param n int整型 最大位数
     * @return int整型vector
     */
    vector<int> printNumbers(int n) {
        // write code here
        std::vector<int> result;
        n = std::pow(10,n);
        for(int i=1;i<n;++i)
        {
            result.push_back(i);
        }
        return result;
    }
};

/** @nc code=end */

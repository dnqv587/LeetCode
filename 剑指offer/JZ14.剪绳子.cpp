/**
 * @nc app=nowcoder id=57d85990ba5b440ab888fc72b0751bf8 topic=13 question=33257 lang=C++
 * 2024-12-02 16:46:39
 * https://www.nowcoder.com/practice/57d85990ba5b440ab888fc72b0751bf8?tpId=13&tqId=33257
 * [JZ14] 剪绳子
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param n int整型 
     * @return int整型
     */
    int cutRope(int n) {
        // write code here
        if(n<=3)
        {
            return n-1;
        }

        int result = 1;

        while(n > 4)
        {
            result *= 3;
            n -= 3;
        }

        return result*n;
    }
};

/** @nc code=end */

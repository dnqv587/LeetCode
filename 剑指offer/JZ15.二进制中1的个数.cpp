/**
 * @nc app=nowcoder id=8ee967e43c2c4ec193b040ea7fbb10b8 topic=13 question=11164 lang=C++
 * 2024-12-02 17:13:56
 * https://www.nowcoder.com/practice/8ee967e43c2c4ec193b040ea7fbb10b8?tpId=13&tqId=11164
 * [JZ15] 二进制中1的个数
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
    int NumberOf1(int n) {
        // write code here
        int count = 0;
        for (int i = 0; i < 32; ++i)
        {
            if(n & (0x01 <<i))
            {
                ++count;
            }
        }
        return count;
    }
};

/** @nc code=end */

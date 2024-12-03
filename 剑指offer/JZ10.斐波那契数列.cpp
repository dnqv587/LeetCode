/**
 * @nc app=nowcoder id=c6c7742f5ba7442aada113136ddea0c3 topic=13 question=11160 lang=C++
 * 2024-10-18 10:37:24
 * https://www.nowcoder.com/practice/c6c7742f5ba7442aada113136ddea0c3?tpId=13&tqId=11160
 * [JZ10] 斐波那契数列
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
    int Fibonacci(int n) {
        // write code here
        int result{};
        if (n == 1 || n == 2)
        {
            result = 1;
        }
        else
        {
            result = Fibonacci(n - 1) + Fibonacci(n - 2);
        }
        return result;
    }
};

/** @nc code=end */

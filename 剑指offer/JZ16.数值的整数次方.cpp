/**
 * @nc app=nowcoder id=1a834e5e3e1a4b7ba251417554e07c00 topic=13 question=11165 lang=C++
 * 2024-12-02 17:21:36
 * https://www.nowcoder.com/practice/1a834e5e3e1a4b7ba251417554e07c00?tpId=13&tqId=11165
 * [JZ16] 数值的整数次方
 */

/** @nc code=start */

class Solution {
public:
    double Power(double base, int exponent) {
        double result = 1;
        if (exponent > 0)
        {
            for (int i = 0; i < exponent;++i)
            {
                result *= base;
            }
        }
        else if(exponent < 0)
        {
            
        }
        return result;
    }
};

/** @nc code=end */

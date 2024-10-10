/**
 * @nc app=nowcoder id=6fe361ede7e54db1b84adc81d09d8524 topic=13 question=11203 lang=C++
 * 2024-10-08 16:35:34
 * https://www.nowcoder.com/practice/6fe361ede7e54db1b84adc81d09d8524?tpId=13&tqId=11203
 * [JZ3] 数组中重复的数字
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param numbers int整型vector 
     * @return int整型
     */
    int duplicate(vector<int>& numbers) {
        // write code here
        std::unordered_set<int> nums;
        for(const auto& i: numbers)
        {
            auto entry = nums.find(i);
            if (entry != nums.end())
            {
                return i;
            }
            else
            {
                nums.insert(i);
            }
        }
        return -1;
    }
};

/** @nc code=end */

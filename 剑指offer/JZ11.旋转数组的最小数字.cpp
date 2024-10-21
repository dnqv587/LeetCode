/**
 * @nc app=nowcoder id=9f3231a991af4f55b95579b44b7a01ba topic=13 question=11159 lang=C++
 * 2024-10-19 21:55:58
 * https://www.nowcoder.com/practice/9f3231a991af4f55b95579b44b7a01ba?tpId=13&tqId=11159
 * [JZ11] 旋转数组的最小数字
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param nums int整型vector 
     * @return int整型
     */
    int minNumberInRotateArray(vector<int>& nums) {
        // write code here
        int len = nums.size();
        int begin = 0;
        int end = len - 1;
        int mid = (begin + end) / 2;
        while( begin <= end)
        {
            if(nums[mid] < nums[mid - 1])
            {
                return nums[mid];
            }
            else
            {
                if(nums[mid] > nums[end])
                {
                    begin = mid + 1;
                }
                else if( nums[mid] == nums[end])
                {
                    end--;
                }
                else
                {
                    end = mid - 1;
                }
                mid = (begin + end) / 2;
            }
        }

        return nums.front();
    }
};

/** @nc code=end */

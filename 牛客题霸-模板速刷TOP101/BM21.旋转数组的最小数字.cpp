/**
 * @nc app=nowcoder id=9f3231a991af4f55b95579b44b7a01ba topic=295 question=23269 lang=C++
 * 2025-03-13 23:35:32
 * https://www.nowcoder.com/practice/9f3231a991af4f55b95579b44b7a01ba?tpId=295&tqId=23269
 * [BM21] 旋转数组的最小数字
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
        if(nums.empty()){
            return -1;
        }
        int min = nums.front();
        for(int i:nums){
            if(i < min){
                min = i;
            }
        }
        return min;
    }
};

/** @nc code=end */

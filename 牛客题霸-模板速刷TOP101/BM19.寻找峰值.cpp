/**
 * @nc app=nowcoder id=fcf87540c4f347bcb4cf720b5b350c76 topic=295 question=2227748 lang=C++
 * 2025-03-13 23:22:40
 * https://www.nowcoder.com/practice/fcf87540c4f347bcb4cf720b5b350c76?tpId=295&tqId=2227748
 * [BM19] 寻找峰值
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
    int findPeakElement(vector<int>& nums) {
        // write code here
        int len = nums.size();
        if(len <=0){
            return -1;
        }
        int max = 0;
        for(int i=0;i<len;++i){
            if(nums[i]<nums[max]){
                return max;
            }else{
                max = i;
            }
        }
        return max;
    }
};

/** @nc code=end */

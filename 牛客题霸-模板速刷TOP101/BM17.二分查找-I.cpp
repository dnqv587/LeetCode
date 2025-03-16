/**
 * @nc app=nowcoder id=d3df40bd23594118b57554129cadf47b topic=295 question=1499549 lang=C++
 * 2025-03-13 23:08:08
 * https://www.nowcoder.com/practice/d3df40bd23594118b57554129cadf47b?tpId=295&tqId=1499549
 * [BM17] 二分查找-I
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param nums int整型vector 
     * @param target int整型 
     * @return int整型
     */
    int search(vector<int>& nums, int target) {
        // write code here
        if(nums.empty()){
            return -1;
        }
        int len = nums.size();
        int begin = 0;
        int end = len-1;
        int mid = (end-begin)/2;
        while(begin<=end){
            if(target == nums[mid]){
                return mid;
            }
            if(target > nums[mid]){
                begin=mid+1;
            }
            else{
                end = mid-1;
            }
            mid = begin + (end-begin)/2;
        }
        return -1;
    }
};

/** @nc code=end */

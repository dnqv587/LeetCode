/**
 * @nc app=nowcoder id=96bd6684e04a44eb80e6a68efc0ec6c5 topic=295 question=23260 lang=C++
 * 2025-03-13 23:29:53
 * https://www.nowcoder.com/practice/96bd6684e04a44eb80e6a68efc0ec6c5?tpId=295&tqId=23260
 * [BM20] 数组中的逆序对
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
    int InversePairs(vector<int>& nums) {
        // write code here
        int result = 0;
        int len = nums.size();
        for(int i=0;i<len;++i){
            
            int count=0;
            for(int j=i;j>=0;--j){
                if(nums[i] < nums[j]){
                    ++count;
                }
            }
            result +=count;
        }
        return result%1000000007;
    }
};

/** @nc code=end */

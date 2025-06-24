/**
 * @nc app=nowcoder id=389fc1c3d3be4479a154f63f495abff8 topic=295 question=1375231 lang=C++
 * 2025-04-23 09:42:36
 * https://www.nowcoder.com/practice/389fc1c3d3be4479a154f63f495abff8?tpId=295&tqId=1375231
 * [BM52] 数组中只出现一次的两个数字
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param nums int整型vector 
     * @return int整型vector
     */
    vector<int> FindNumsAppearOnce(vector<int>& nums) {
        // write code here
        std::vector<int> vec;
        std::map<int, int> numMap;
        for(int i:nums){
            auto iter = numMap.find(i);
            if(iter != numMap.end()){
                ++iter->second;
            }else{
                numMap.insert(std::make_pair(i, 1));
            }
        }
        for(auto i:numMap){
            if(i.second == 1){
                vec.push_back(i.first);
            }
        }
        return vec;
    }
};

/** @nc code=end */

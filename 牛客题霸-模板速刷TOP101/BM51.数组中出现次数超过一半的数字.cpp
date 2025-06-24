/**
 * @nc app=nowcoder id=e8a1b01a2df14cb2b228b30ee6a92163 topic=295 question=23271 lang=C++
 * 2025-04-23 09:32:48
 * https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163?tpId=295&tqId=23271
 * [BM51] 数组中出现次数超过一半的数字
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
    int MoreThanHalfNum_Solution(vector<int>& numbers) {
        // write code here
        int half_len = numbers.size()/2;
        std::unordered_map<int, int> numMap;
        for(int i:numbers){
            auto iter = numMap.find(i);
            if(iter!=numMap.end()){
                if(++iter->second > half_len){
                    return iter->first;
                }
            }else{
                numMap.insert(std::make_pair(i, 1));
            }
        }
        if(half_len == 0){
            return numbers[0];
        }
        return -1;
    }
};

/** @nc code=end */

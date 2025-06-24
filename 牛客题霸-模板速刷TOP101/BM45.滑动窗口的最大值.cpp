/**
 * @nc app=nowcoder id=1624bc35a45c42c0bc17d17fa0cba788 topic=295 question=23458 lang=C++
 * 2025-04-22 14:00:40
 * https://www.nowcoder.com/practice/1624bc35a45c42c0bc17d17fa0cba788?tpId=295&tqId=23458
 * [BM45] 滑动窗口的最大值
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param num int整型vector 
     * @param size int整型 
     * @return int整型vector
     */
    vector<int> maxInWindows(vector<int>& num, int size) {
        // write code here
        if(num.empty() || num.size() < size || size <=0){
            return {};
        }
        std::vector<int> result;
        for(int i=0;i<num.size();++i){
            size_t len = std::distance(num.begin()+i, num.end());
            if(len < size){
                break;
            }else{
               auto max=std::max_element(num.begin()+i,num.begin()+i+size ); 
               result.push_back(*max);
            }
        }
        return result;
    }
};

/** @nc code=end */

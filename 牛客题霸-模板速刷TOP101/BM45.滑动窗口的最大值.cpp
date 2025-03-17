/**
 * @nc app=nowcoder id=1624bc35a45c42c0bc17d17fa0cba788 topic=295 question=23458 lang=C++
 * 2025-03-17 10:20:56
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
    std::vector<int> maxInWindows(std::vector<int> num, int size) {
        // write code here
        if (size<=0) {
          return {};
        }
        std::vector<int> result;
        for (int i=0;i<num.size();++i) {
          if (num.size()-i < size) {
            break;
          }
          int max = i;
          for (int j=0;j<size;++j) {
            if (num[i+j] > num[max]) {
              max = i+j;
            }
          }
          result.push_back(num[max]);
        }
        return result;
      }
};

/** @nc code=end */

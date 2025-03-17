/**
 * @nc app=nowcoder id=9be0172896bd43948f8a32fb954e1be1 topic=295 question=23457 lang=C++
 * 2025-03-17 14:01:41
 * https://www.nowcoder.com/practice/9be0172896bd43948f8a32fb954e1be1?tpId=295&tqId=23457
 * [BM48] 数据流中的中位数
 */

/** @nc code=start */

class Solution {
public:
    void Insert(int num) {
        _nums.insert(num);
    }

    double GetMedian() { 
        int size=_nums.size();
        int mid=size/2-1;
        if(size%2 == 0){
            for()
            return _nums[]
        }
    }
private:
    std::multiset<int> _nums;
};

/** @nc code=end */

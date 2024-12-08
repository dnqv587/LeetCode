/**
 * @nc app=nowcoder id=4c776177d2c04c2494f2555c9fcc1e49 topic=13 question=11173 lang=C++
 * 2024-12-07 23:24:41
 * https://www.nowcoder.com/practice/4c776177d2c04c2494f2555c9fcc1e49?tpId=13&tqId=11173
 * [JZ30] 包含min函数的栈
 */

/** @nc code=start */

class Solution {
public:
    void push(int value) {
        _data.push_back(value);
        if(value < _data[_minIndex])
        {
            _minIndex = _data.size() - 1;
        }
    }
    void pop() {
        if(_data.size() - 1 == _minIndex && _data.size() > 1)
        {
            int min = 0 ;
            for(int i = 1;i<_data.size() - 1;++i)
            {
                if(_data[min] > _data[i])
                {
                    min = i;
                }
            }
            _minIndex = min;
        }
        _data.pop_back();
    }
    int top() {
        return _data.back();
    }
    int min() {
        return _data[_minIndex];
    }
private:
    int _minIndex = 0;
    std::vector<int> _data;
};

/** @nc code=end */

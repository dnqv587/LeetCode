/**
 * @nc app=nowcoder id=4c776177d2c04c2494f2555c9fcc1e49 topic=295 question=23268 lang=C++
 * 2025-03-17 09:46:51
 * https://www.nowcoder.com/practice/4c776177d2c04c2494f2555c9fcc1e49?tpId=295&tqId=23268
 * [BM43] 包含min函数的栈
 */

/** @nc code=start */

class Solution {
public:
    void push(int value) {
        if(_stack2.empty() || value < _stack2.top()){
            _stack2.push(value);
        }else{
            _stack2.push(_stack2.top());
        }
        _stack1.push(value);
    }
    void pop() {
        _stack2.pop();
        _stack1.pop();
        
    }
    int top() {
        return _stack1.top();
    }
    int min() {
       return _stack2.top();
    }
private:
    std::stack<int> _stack1;
    std::stack<int> _stack2;
};

/** @nc code=end */

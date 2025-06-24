/**
 * @nc app=nowcoder id=4c776177d2c04c2494f2555c9fcc1e49 topic=295 question=23268 lang=C++
 * 2025-04-22 11:14:07
 * https://www.nowcoder.com/practice/4c776177d2c04c2494f2555c9fcc1e49?tpId=295&tqId=23268
 * [BM43] 包含min函数的栈
 */

/** @nc code=start */

class Solution {
public:
    void push(int value) {
        stack_.push(value);
        set_.insert(value);
    }
    void pop() {
        auto pos=std::find(set_.begin(), set_.end(),stack_.top());
        if(pos != set_.end()){
            set_.erase(pos);
        }
        stack_.pop();
    }
    int top() {
        return stack_.top();
    }
    int min() {
        return *set_.begin();
    }
    
private:
    std::stack<int> stack_;
    std::multiset<int> set_;
};

/** @nc code=end */

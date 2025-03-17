/**
 * @nc app=nowcoder id=54275ddae22f475981afa2244dd448c6 topic=295 question=23281 lang=C++
 * 2025-03-16 23:26:15
 * https://www.nowcoder.com/practice/54275ddae22f475981afa2244dd448c6?tpId=295&tqId=23281
 * [BM42] 用两个栈实现队列
 */

/** @nc code=start */

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        auto ret = stack2.top();
        stack2.pop();
        return ret;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=54275ddae22f475981afa2244dd448c6 topic=13 question=11158 lang=C++
 * 2024-10-18 09:37:54
 * https://www.nowcoder.com/practice/54275ddae22f475981afa2244dd448c6?tpId=13&tqId=11158
 * [JZ9] 用两个栈实现队列
 */

/** @nc code=start */

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty())
        {
            while(!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        auto &node = stack2.top();
        stack2.pop();
        return node;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=37548e94a270412c8b9fb85643c8ccc2 topic=295 question=726 lang=C++
 * 2025-04-22 13:44:01
 * https://www.nowcoder.com/practice/37548e94a270412c8b9fb85643c8ccc2?tpId=295&tqId=726
 * [BM44] 有效括号序列
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param s string字符串 
     * @return bool布尔型
     */
    bool isValid(string s) {
        // write code here
        if(s.empty()){
            return false;
        }
        std::stack<char> stk;
        for(char c:s){
            if(stk.empty()){
                stk.push(c);
            }else{
                char top = stk.top();
                if(top=='(' && c==')' || top=='{' && c=='}' || top=='['&&c==']'){
                    stk.pop();
                }else{
                    stk.push(c);
                }
            }
        }
        if(stk.empty()){
            return true;
        }
        return false;
    }
};

/** @nc code=end */

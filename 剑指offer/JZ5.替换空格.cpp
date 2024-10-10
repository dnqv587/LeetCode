/**
 * @nc app=nowcoder id=0e26e5551f2b489b9f58bc83aa4b6c68 topic=13 question=11155 lang=C++
 * 2024-10-08 16:55:05
 * https://www.nowcoder.com/practice/0e26e5551f2b489b9f58bc83aa4b6c68?tpId=13&tqId=11155
 * [JZ5] 替换空格
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param s string字符串 
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here
        std::string result;

        for(auto c : s){
            if(c == ' '){
                result.append("%20");
            }else{
                result.push_back(c);
            }
        }
        return result;
    }
};

/** @nc code=end */

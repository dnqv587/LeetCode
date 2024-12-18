/**
 * @nc app=nowcoder id=ef1f53ef31ca408cada5093c8780f44b topic=13 question=11166 lang=C++
 * 2024-12-04 09:54:41
 * https://www.nowcoder.com/practice/ef1f53ef31ca408cada5093c8780f44b?tpId=13&tqId=11166
 * [JZ21] 调整数组顺序使奇数位于偶数前面(一)
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param array int整型vector 
     * @return int整型vector
     */
    vector<int> reOrderArray(vector<int>& array) {
        // write code here
        std::vector<int> ji;
        std::vector<int> ou;
        for(int i:array)
        {
            if(i%2 == 0)
            {
                ou.push_back(i);
            }
            else{
                ji.push_back(i);
            }
        }

        ji.insert(ji.end(), ou.begin(), ou.end());
       
        return ji;
    }
};

/** @nc code=end */

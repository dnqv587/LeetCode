/**
 * @nc app=nowcoder id=d77d11405cc7470d82554cb392585106 topic=13 question=11174 lang=C++
 * 2024-12-08 15:13:05
 * https://www.nowcoder.com/practice/d77d11405cc7470d82554cb392585106?tpId=13&tqId=11174
 * [JZ31] 栈的压入、弹出序列
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pushV int整型vector 
     * @param popV int整型vector 
     * @return bool布尔型
     */
    bool IsPopOrder(vector<int>& pushV, vector<int>& popV) {
        // write code here
        auto iter = std::find(pushV.begin(),pushV.end(),popV.front());
        int beginIdx;
        if(iter != pushV.end())
        {
            beginIdx = std::distance(pushV.begin(),iter);
        }
        else
        {
            return false;
        }

        int ln = beginIdx-1;
        //int rn = beginIdx+1;
        for(auto i = popV.begin()+1;i!=popV.end();++i)
        {
            if(*i == pushV[ln])
            {
                --ln;
            }
            else
            {
                std::vector<int> lv (pushV.begin()+beginIdx,pushV.end());
                std::vector<int> rv(i,popV.end());

                bool ret = IsPopOrder(lv,rv);
                if(!ret)
                {
                    return false;
                }
            }
        }
        return true;
    }
};

/** @nc code=end */

/**
 * @nc app=nowcoder id=9b4c81a02cd34f76be2659fa0d54342a topic=13 question=11172 lang=C++
 * 2024-12-07 22:32:18
 * https://www.nowcoder.com/practice/9b4c81a02cd34f76be2659fa0d54342a?tpId=13&tqId=11172
 * [JZ29] 顺时针打印矩阵
 */

/** @nc code=start */

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        std::vector<int> result;
        if(!matrix.size())
        {
            return result;
        }
        int hlen = matrix[0].size();
        int rlen = matrix.size();
        int len = std::min(hlen,rlen);
        int count = len/2 + len%2;
        int n = 0;
        while(count)
        {
            for(int i = 0+n;i<hlen-n;++i)
            {
                result.push_back(matrix[n][i]);
            }
            for(int i = 1+n;i<rlen-n;++i)
            {
                result.push_back(matrix[i][rlen -1 -n]);
            }
            for(int i = hlen-1-n-1;i>=n;--i)
            {
                result.push_back(matrix[hlen -1 -n][i]);
            }
            for(int i = rlen-1-n-1;i>n;--i)
            {
                result.push_back(matrix[i][n]);
            }
            ++n;
            --count;
        }
        return result;
    }
};

/** @nc code=end */

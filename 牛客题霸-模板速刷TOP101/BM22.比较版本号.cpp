/**
 * @nc app=nowcoder id=2b317e02f14247a49ffdbdba315459e7 topic=295 question=1024572 lang=C++
 * 2025-03-14 10:41:41
 * https://www.nowcoder.com/practice/2b317e02f14247a49ffdbdba315459e7?tpId=295&tqId=1024572
 * [BM22] 比较版本号
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 比较版本号
     * @param version1 string字符串 
     * @param version2 string字符串 
     * @return int整型
     */
    std::vector<int> splitConvert(const std::string& version){
      std::vector<int> result;
      auto left = version.begin();
      auto right = std::find(version.begin(), version.end(), '.');
      while(right != version.end()){
        int val=0;
        for(auto i=left;i!=right;++i){
          val = val*10+((*i) - '0');
        }
        result.push_back(val);
        left = right+1;
        right = std::find(left, version.end(), '.');
      }
      if(left != version.end()){
        int val=0;
        for(auto i=left;i!=right;++i){
          val = val*10+((*i) - '0');
        }
        result.push_back(val);
      }
      return result;
    }
    int compare(std::string version1, std::string version2) {
        // write code here
        auto splitVersion1 = splitConvert(version1);
        auto splitVersion2 = splitConvert(version2);
        auto verIter1 = splitVersion1.begin();
        auto verIter2 = splitVersion2.begin();
        while(verIter1 != splitVersion1.end() || verIter2 != splitVersion2.end()){
          int val1 = verIter1!= splitVersion1.end()?*verIter1:0;
          int val2 = verIter2!= splitVersion2.end()?*verIter2:0;
          if(val1 > val2){
            return 1;
          }
          if(val1 < val2){
            return -1;
          }
        if (verIter1 != splitVersion1.end()) {
            ++verIter1;
        }

        if (verIter2 != splitVersion2.end()) {
            ++verIter2;
        }
        }
        return 0;
    }
};

/** @nc code=end */

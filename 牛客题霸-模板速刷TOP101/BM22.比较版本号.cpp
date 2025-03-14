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
    int compare(std::string version1, std::string version2) {
        // write code here
        int len1= version1.size();
        int len2= version2.size();
        int begin1 = 0;
        int begin2 = 0;
        int end1=0;
        int end2=0;
        while (begin1 < len1 || begin2 < len2) {
          for (int i = begin1;begin1<len1;++i){
            if (version1[i] != '0') {
              begin1=i;
              break;
            }
          }
          for (int i = begin2;begin2<len2;++i){
            if (version2[i] != '0') {
              begin2=i;
              break;
            }
          }
      
          for (int i = begin1;i<=len1;++i){
            end1=i;
            if (version1[i] == '.') {
              break;
            }
          }
          for (int i = begin2;i<=len2;++i){
            end2=i;
            if (version2[i] == '.') {
              break;
            }
          }
          if (end1-begin1 > end2-begin2) {
            return 1;
          }
          else if (end1-begin1 < end2-begin2) {
            return -1;
          }
      
          while (begin1 < end1 || begin2 < end2) {
            if (begin1 >= end1) {
              return -1;
            }
            if (begin2 >= end2) {
              return 1;
            }
            if (version1[begin1] > version2[begin2]) {
              return 1;
            }
            else if (version1[begin1] < version2[begin2]) {
              return -1;
            }
            ++begin1;
            ++begin2;
          }
          begin1=end1==len1?end1:end1+1;
          begin2=end2==len2?end2:end2+1;
        }
        return 0;
      }
};

/** @nc code=end */

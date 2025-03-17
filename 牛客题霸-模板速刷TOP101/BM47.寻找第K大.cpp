/**
 * @nc app=nowcoder id=e016ad9b7f0b45048c58a9f27ba618bf topic=295 question=44581 lang=C++
 * 2025-03-17 11:06:12
 * https://www.nowcoder.com/practice/e016ad9b7f0b45048c58a9f27ba618bf?tpId=295&tqId=44581
 * [BM47] 寻找第K大
 */

/** @nc code=start */

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param a int整型vector 
     * @param n int整型 
     * @param K int整型 
     * @return int整型
     */
    int partition(std::vector<int>& arr,int begin,int end) {
        int pivot = arr[end];
        int left = begin;
        int right= end;
        while (left < right) {
          while (left < right && arr[left] > pivot) {
            ++left;
          }
          if (left < right) {
            std::swap(arr[left],arr[right--]);
          }
          while (left < right && arr[right] < pivot) {
            --right;
          }
          if (left < right) {
            std::swap(arr[left++],arr[right]);
          }
        }
        return left;
      }
      
      void sort(std::vector<int>& a,int begin,int end) {
        if (begin >= end) {
          return;
        }
        const int mid = partition(a,begin,end);
        sort(a,begin,mid-1);
        sort(a,mid+1,end);
      }
      
      int findKth(std::vector<int>& a, int n, int K) {
        // write code here
        sort(a,0,n-1);
        return a[K-1];
      }
};

/** @nc code=end */

#include <vector>
using namespace std;

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    // i ,j从尾部开始，谁大就移谁
    // 这样的好处是，可以不用新开辟数组空间，直接在num1上修改
    int i = m - 1, j = n - 1;
    for (int k = m + n - 1; k >= 0; k--)
    {
      if (j < 0 || (i >= 0 && nums1[i] >= nums2[j]))
      {
        nums1[k] = nums1[i];
        i--;
      }
      else
      {
        nums1[k] = nums2[j];
        j--;
      }
    }
  }
};
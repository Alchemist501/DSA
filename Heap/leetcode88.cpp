class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int end = m + n - 1;
    if (m == 0) {
      for (int i = 0; i < n; i++) {
        nums1[i] = nums2[i];
      }
    }
    while (m > 0 && n > 0) {
      if (nums1[m - 1] > nums2[n - 1]) {
        nums1[end] = nums1[m - 1];
        end--;
        m--;
      } else if (nums1[m - 1] <= nums2[n - 1]) {
        nums1[end] = nums2[n - 1];
        n--;
        end--;
      }
    }
    while (n > 0) {
      nums1[end] = nums2[n - 1];
      end--;
      n--;
    }
  }
};
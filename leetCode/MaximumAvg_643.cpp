// leetcode.com/problems/maximum-average-subarray-i
class Solution {
 public:
  double findMaxAverage(vector<int>& nums, int k) {
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < k; i++) {
      sum += nums[i];
    }
    ans = sum;
    for (int i = k; i < nums.size(); i++) {
      sum -= nums[i - k];
      sum += nums[i];
      ans = max(ans, sum);
    }
    return ans * 1.0 / k;
  }
};
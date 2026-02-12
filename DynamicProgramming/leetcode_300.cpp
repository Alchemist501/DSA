class Solution {
 public:
  int lengthOfLIS(vector<int>& nums) {
    int result = 1;
    vector<int> dp(nums.size(), 1);
    for (int i = nums.size() - 1; i > -1; i--) {
      for (int j = i; j < nums.size(); j++) {
        if (nums[i] < nums[j]) {
          dp[i] = max(dp[i], dp[j] + 1);
          result = max(dp[i], result);
        }
      }
    }
    return result;
  }
};
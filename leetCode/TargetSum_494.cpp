class Solution {
 public:
  int findTargetSumWays(vector<int>& nums, int target) {
    unordered_map<int, int> dp;
    dp[0] = 1;
    for (int i = 0; i < nums.size(); i++) {
      unordered_map<int, int> nextDP;
      for (auto ele : dp) {
        nextDP[ele.first + nums[i]] += ele.second;
        nextDP[ele.first - nums[i]] += ele.second;
      }
      dp = nextDP;
    }
    return dp[target];
  }
};
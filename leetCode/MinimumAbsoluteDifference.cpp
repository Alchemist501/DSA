class Solution {
 public:
  vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
    int Min = INT_MAX;
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
      Min = min(abs(nums[i] - nums[i + 1]), Min);
    }
    for (int i = 0; i < nums.size() - 1; i++) {
      if (abs(nums[i] - nums[i + 1]) == Min)
        ans.push_back({nums[i], nums[i + 1]});
    }
    return ans;
  }
};
class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> ans;
    vector<vector<int>> bucket(nums.size() + 1);
    int count = 1;
    if (nums.size() == 1) {
      if (k == 1)
        return nums;
      else
        return ans;
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == nums[i + 1]) {
        count++;
        if (i + 1 == nums.size() - 1) bucket[count].push_back(nums[i]);
      } else {
        bucket[count].push_back(nums[i]);
        count = 1;
      }
    }
    if (nums[nums.size() - 1] != nums[nums.size() - 2]) {
      bucket[1].push_back(nums[nums.size() - 1]);
    }
    for (int i = bucket.size() - 1; i >= 0; i--) {
      for (int j = 0; j < bucket[i].size(); j++) {
        ans.push_back(bucket[i][j]);
        if (ans.size() == k) return ans;
      }
    }
    return ans;
  }
};
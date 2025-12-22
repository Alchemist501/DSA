class Solution {
 public:
  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ans;
    vector<int> count(102, 0);
    for (auto ele : nums) {
      count[ele + 1]++;
    }
    for (int i = 1; i < 102; i++) {
      count[i] += count[i - 1];
    }
    for (auto ele : nums) {
      ans.push_back(count[ele]);
    }
    return ans;
  }
};
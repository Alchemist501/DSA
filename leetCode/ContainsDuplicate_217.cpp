class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> map;
    for (auto ele : nums) {
      map[ele]++;
      if (map[ele] > 1) return true;
    }
    return false;
  }
};
class Solution {
 public:
  bool canPartition(vector<int>& nums) {
    int sum = 0;
    for (auto ele : nums) sum += ele;
    if (sum % 2 != 0) return false;
    set<int> PossibleSums = {0};
    for (auto ele : nums) {
      if (ele == sum / 2) return true;
      set<int> newDP;
      for (auto el : PossibleSums) {
        if (ele + el == sum / 2) return true;
        newDP.insert(ele + el);
      }
      PossibleSums.insert(newDP.begin(), newDP.end());
    }
    return false;
  }
};
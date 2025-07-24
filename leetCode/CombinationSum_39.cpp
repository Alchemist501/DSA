// Problem: leetcode.com/problems/combination-sum
class Solution {
 public:
  void Combinations(vector<int>& candidates, int idx, vector<int>& comb,
                    vector<vector<int>>& res, int sum, int target) {
    if (sum == target) {
      res.push_back(comb);
      return;
    }
    for (int i = idx; i < candidates.size(); i++, idx++) {
      sum += candidates[i];
      if (sum > target) break;
      comb.push_back(candidates[i]);
      Combinations(candidates, idx, comb, res, sum, target);
      comb.pop_back();
      sum -= candidates[i];
    }
  }
  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    int sum = 0;
    vector<int> comb;
    vector<vector<int>> res;
    sort(candidates.begin(), candidates.end());
    Combinations(candidates, 0, comb, res, sum, target);
    return res;
  }
};
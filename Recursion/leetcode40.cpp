class Solution {
 public:
  void Recursion(int sum, vector<int>& combination, int idx, int target,
                 vector<vector<int>>& res, vector<int> candidates) {
    if (sum == target) {
      res.push_back(combination);
      return;
    }
    for (int i = idx; i < candidates.size(); i++) {
      if (i > idx && candidates[i] == candidates[i - 1]) {
        continue;
      }
      if (sum > target) break;
      sum += candidates[i];
      combination.push_back(candidates[i]);
      Recursion(sum, combination, i + 1, target, res, candidates);
      sum -= candidates[i];
      combination.pop_back();
    }
  }
  vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<int> combination;
    vector<vector<int>> res;
    sort(candidates.begin(), candidates.end());
    Recursion(0, combination, 0, target, res, candidates);
    return res;
  }
};
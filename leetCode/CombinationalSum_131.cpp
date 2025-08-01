// Problem := leetcode.com/problems/palindrome-partitioning
class Solution {
 public:
  bool IsPalindrome(string s) {
    string cp = s;
    reverse(cp.begin(), cp.end());
    return cp == s;
  }
  void getSub(vector<vector<string>>& ans, vector<string> subset, string s) {
    if (s.size() == 0) {
      ans.push_back(subset);
      return;
    }
    for (int i = 0; i < s.size(); i++) {
      string str = s.substr(0, i + 1);
      if (IsPalindrome(str)) {
        subset.push_back(str);
        getSub(ans, subset, s.substr(i + 1));
        subset.pop_back();
      }
    }
  }
  vector<vector<string>> partition(string s) {
    vector<string> subset;
    vector<vector<string>> ans;
    getSub(ans, subset, s);
    return ans;
  }
};
class Solution {
 public:
  char swapCase(char c) {
    if (isupper(c))
      return tolower(c);
    else
      return toupper(c);
  }
  void backTrack(vector<string>& res, string s, string sub, int i) {
    if (s.size() == sub.size()) {
      res.push_back(sub);
      return;
    }
    if (isalpha(s[i])) backTrack(res, s, sub + swapCase(s[i]), i + 1);
    backTrack(res, s, sub + s[i], i + 1);
  }
  vector<string> letterCasePermutation(string s) {
    vector<string> res;
    backTrack(res, s, "", 0);
    return res;
  }
};
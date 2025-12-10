class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];
    for (auto ele : strs) {
      if (prefix.length() > ele.length()) prefix.erase(ele.length());
      for (int i = 0; i < ele.length(); i++) {
        if (prefix[i] != ele[i]) {
          prefix.erase(i);
          break;
        }
      }
    }
    return prefix;
  }
};
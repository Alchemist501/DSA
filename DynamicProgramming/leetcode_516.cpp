class Solution {
 public:
  int longestPalindromeSubseq(string s) {
    string rev = s;
    int len = s.size();
    reverse(rev.begin(), rev.end());
    vector<vector<int>> dp(len + 1, vector<int>(len + 1, 0));
    for (int i = len - 1; i > -1; i--) {
      for (int j = len - 1; j > -1; j--) {
        if (s[i] == rev[j])
          dp[i][j] = 1 + dp[i + 1][j + 1];
        else
          dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
    return dp[0][0];
  }
};
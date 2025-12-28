class Solution:
    def knapSack(self, val, wt, capacity):
        # code here
        dp = [0] * (capacity + 1)
        for i in range(capacity + 1):
            for j, v in enumerate(val):
                if i >= wt[j]:
                    dp[i] = max(dp[i], v + dp[i - wt[j]])
        return dp[capacity]
        
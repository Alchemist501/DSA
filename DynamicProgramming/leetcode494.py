class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        dp = defaultdict(int)
        dp[0] = 1
        for i in range(len(nums)):
            nextDP = defaultdict(int)
            for sum, count in dp.items():
                nextDP[sum + nums[i]] += count
                nextDP[sum - nums[i]] += count
            dp = nextDP
        return dp[target]
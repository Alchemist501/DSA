class NumArray:

    def __init__(self, nums: List[int]):
        self.dp = nums
        for i in range(1,len(nums)):
            self.dp[i] += self.dp[i-1]

    def sumRange(self, left: int, right: int) -> int:
        return self.dp[right] if left == 0 else self.dp[right] - self.dp[left-1]      


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        xor1 = 0
        xor2 = 0
        for i in range(len(nums)):
            xor1 = xor1^(i+1)
            xor2 = xor2^nums[i]
        return xor1^xor2
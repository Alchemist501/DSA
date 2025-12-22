class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        l = len(nums)
        firstIndex = {}
        sorted_nums = sorted(nums,reverse=True)
        for i,n in enumerate(sorted_nums):
            firstIndex[n] = l-i-1
        return [firstIndex[n] for n in nums]
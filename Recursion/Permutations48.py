class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []

        def BackTrack(idx):
            if idx == len(nums):
                res.append(nums.copy())
            for i in range(idx, len(nums)):
                nums[idx], nums[i] = nums[i], nums[idx]
                BackTrack(idx + 1)
                nums[idx], nums[i] = nums[i], nums[idx]

        BackTrack(0)
        return res

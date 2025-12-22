class Solution:
    def minSubArrayLen(self, k: int, nums: List[int]) -> int:
        sum, start, end = nums[0], 0, 0
        length = float("inf")
        while start < len(nums) and end < len(nums):
            if sum < k:
                if end < len(nums) - 1:
                    end += 1
                    sum += nums[end]
                else:
                    break
            if sum >= k:
                length = min(end - start + 1, length)
                sum -= nums[start]
                start += 1
        return length if length != float("inf") else 0

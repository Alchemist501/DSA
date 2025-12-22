class Solution:
    def longestMountain(self, nums: List[int]) -> int:
        n = len(nums)
        if n < 3:
            return 0
        length = 0
        left, peek, right = 0, 1, 0
        while peek < n - 1:
            if nums[peek - 1] < nums[peek] and nums[peek] > nums[peek + 1]:
                left = peek - 1
                while left > 0 and nums[left] > nums[left - 1]:
                    left -= 1
                right = peek + 1
                while right < n - 1 and nums[right] > nums[right + 1]:
                    right += 1
                length = max(right - left + 1, length)
                peek = right
            else:
                peek += 1
        return length

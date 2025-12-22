class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        i = 0
        ans = []
        nums.sort()
        while i < len(nums) - 2:
            sum = nums[i]
            left = i+1
            right = len(nums) -1
            while(left < right):
                if sum + nums[left] + nums[right] == 0:
                    ans.append([nums[i], nums[left], nums[right]])
                    while nums[left] == nums[left + 1] and left < len(nums) - 2:
                        left += 1
                    left += 1
                    while nums[right] == nums[right - 1] and right > 0:
                        right -= 1
                    right -= 1
                elif sum + nums[left]  + nums[right] > 0:
                    while nums[right] == nums[right - 1] and right > 0:
                        right -= 1
                    right -= 1
                else:
                    while left + 1 < len(nums) and nums[left] == nums[left + 1 ]:
                        left += 1
                    left += 1
            while i+1 < len(nums) and nums[i] == nums[i+1]:
                i += 1
            i+=1
        return ans

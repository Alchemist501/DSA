class Solution:
    def minimumAbsDifference(self, nums: List[int]) -> List[List[int]]:
        ans = []
        Min = sys.maxsize
        nums.sort()
        for i in range(len(nums)-1):
            Min = min(abs(nums[i]-nums[i+1]),Min)
        for i in range(len(nums)-1):
            if(abs(nums[i]-nums[i+1])==Min):
                ans.append([nums[i],nums[i+1]])
        return ans
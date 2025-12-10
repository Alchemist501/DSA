class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans = []
        set_nums = set(nums)
        for n in range(1,len(nums) + 1):
            if n not in set_nums:
                ans.append(n)                
        return ans
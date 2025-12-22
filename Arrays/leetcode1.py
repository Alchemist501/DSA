class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {}
        for i,n in enumerate(nums):
            if dic.get(target-n,None) != None:
                return[i,dic[target-n]]
            else:
                dic[n] = i
        return []
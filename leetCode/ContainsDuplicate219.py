class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        dic = {}
        for idx, n in enumerate(nums):
            if n in dic:
                return True
            dic[n] = idx
            if idx >= k:
                dic.pop(nums[idx-k])
        return False
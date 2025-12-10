class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        ans = []
        cnt = {}
        freq = [[] for x in range(len(nums)+1)]
        for i in nums:
            cnt[i] = 1 + cnt.get(i,0)
        for n,c in cnt.items():
            freq[c].append(n)
        for i in range(len(freq)-1,-1,-1):
            for el in freq[i]:
                ans.append(el)
                if len(ans) == k:
                    return ans
        return ans
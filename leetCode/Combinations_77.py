class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        res = []

        def backTrack(ans, idx):
            if len(ans) == k:
                res.append(ans.copy())
                return
            if len(ans) + (n - idx + 1) < k:
                return
            ans.append(idx)
            backTrack(ans, idx + 1)
            ans.pop()
            backTrack(ans, idx + 1)

        backTrack([], 1)
        return res

class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        def Recursion(ans, sum, i):
            if sum == target:
                res.append(ans.copy())
                return
            elif sum > target:
                return
            elif i == len(candidates):
                return
            sum += candidates[i]
            ans.append(candidates[i])
            Recursion(ans, sum, i)
            sum -= candidates[i]
            ans.pop()
            Recursion(ans, sum , i+1)
        Recursion([],0,0)
        return res
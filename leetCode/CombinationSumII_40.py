class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        def Recursion(sum, combination, idx):
            if sum == target:
                res.append(combination.copy())
                return
            elif sum > target:
                return
            elif idx == len(candidates):
                return
            sum += candidates[idx]
            combination.append(candidates[idx])
            Recursion(sum, combination, idx+1)
            combination.pop()
            sum -= candidates[idx]
            while(idx < len(candidates) - 1 and candidates[idx] == candidates[idx + 1]):
                idx += 1
            Recursion(sum, combination, idx+1)
        res = []
        Recursion(0, [], 0)
        return res 
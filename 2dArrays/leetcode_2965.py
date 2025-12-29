class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        n = len(grid)
        a , b = 0,0
        present = [False] * (n*n + 1) 
        for x in grid:
            for num in x:
                if present[num]:
                    a = num
                present[num] = True
        for i, x in enumerate(present):
            if i != 0 and x == False:
                b = i
        return [a,b]
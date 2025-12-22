class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        def Neighbours(matrix,i,j):
            stack = [[i,j]]
            while stack:
                idx1 , idx2 = stack.pop()
                if(matrix[idx1][idx2] == "1"):
                    matrix[idx1][idx2] = "-1"
                else:
                    continue
                if idx1 < len(matrix) and idx2 < len(matrix[0]) - 1:
                    stack.append([idx1, idx2+1])
                if idx1 < len(matrix) and idx2 > 0:
                    stack.append([idx1, idx2-1])
                if idx1 < len(matrix) - 1 and idx2 < len(matrix[0]):
                    stack.append([idx1+1, idx2])
                if idx1 > 0 and idx2 < len(matrix[0]):
                    stack.append([idx1-1, idx2])
            return matrix

        count = 0
        for idx, row in enumerate(grid):
            for i, col in enumerate(row):
                if col == "1":
                    count += 1
                    grid = Neighbours(grid,idx,i)
        return count
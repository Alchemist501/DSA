class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        res = []
        ans = ["." * n] * n

        def isSafe(col, row, ans):
            if "Q" in ans[row]:
                return False
            for x in range(n):
                if ans[x][col] == "Q":
                    return False
            start, end = 0, n - 1
            if row > col:
                temp_row, temp_col = row - col, 0
            elif row < col:
                temp_row, temp_col = 0, col - row
            else:
                temp_row, temp_col = 0, 0
            while temp_row <= end and temp_col <= end:
                if (
                    temp_row != row
                    and temp_col != col
                    and ans[temp_row][temp_col] == "Q"
                ):
                    return False
                temp_row += 1
                temp_col += 1
            # Right Diagonal
            # Right Upwards
            temp_col, temp_row = col, row
            while temp_col <= end and temp_row >= start:
                if (
                    temp_row != row
                    and temp_col != col
                    and ans[temp_row][temp_col] == "Q"
                ):
                    return False
                temp_row -= 1
                temp_col += 1
            #Right Downwards
            temp_col, temp_row = col, row
            while temp_row <= end and temp_col >= start:
                if (
                    temp_row != row
                    and temp_col != col
                    and ans[temp_row][temp_col] == "Q"
                ):
                    return False
                temp_row += 1
                temp_col -= 1
            return True

        def Recursion(ans, idx):
            if idx == n:
                res.append(ans.copy())
                return
            for i in range(n):
                if isSafe(i, idx, ans):
                    ans[idx] = ans[idx][:i] + "Q" + ans[idx][i + 1 :]
                    Recursion(ans, idx + 1)
                    ans[idx] = ans[idx][:i] + "." + ans[idx][i + 1 :]

        Recursion(ans, 0)
        return res

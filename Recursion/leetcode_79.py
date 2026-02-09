class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        def isValid(row, col, idx, seen):
            if idx == len(word):
                return True
            for r, c in moves:
                nextRow = row + r
                nextCol = col + c
                if (
                    nextRow >= 0
                    and nextRow < len(board)
                    and nextCol >= 0
                    and nextCol < len(board[0])
                ):
                    if (
                        word[idx] == board[nextRow][nextCol]
                        and (nextRow, nextCol) not in seen
                    ):
                        seen.add((nextRow, nextCol))
                        if isValid(nextRow, nextCol, idx + 1, seen):
                            return True
                        seen.remove((nextRow, nextCol))
            return False

        rows, cols = len(board), len(board[0])
        if len(word) > rows * cols:
            return False
        moves = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == word[0]:
                    seen = {(r, c)}
                    if isValid(r, c, 1, seen):
                        return True
        return False

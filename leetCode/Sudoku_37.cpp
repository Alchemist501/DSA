//Problem: leetcode.com/problems/sudoku-solver
class Solution {
public:
    bool IsSafe(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num)
                return false;
            if (board[i][col] == num)
                return false;
        }
        int sr = (row / 3) * 3;
        int sc = (col / 3) * 3;
        for (int i = sr; i <= sr + 2; i++) {
            for (int j = sc; j <= sc + 2; j++) {
                if (board[i][j] == num)
                    return false;
            }
        }
        return true;
    }
    bool Sudoku(vector<vector<char>>& board, int row, int col) {
        if (row == 9)
            return true;
        int nextRow = row, nextCol = col + 1;
        if (nextCol == 9) {
            nextRow = row + 1;
            nextCol = 0;
        }
        if (board[row][col] != '.') {
            return Sudoku(board, nextRow, nextCol);
        }
        for (char dig = '1'; dig <= '9'; dig++) {
            if (IsSafe(board, row, col, dig)) {
                board[row][col] = dig;
                if (Sudoku(board, row, col)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        Sudoku(board, 0, 0);
        return;
    }
};
//Problem := leetcode.com/problems/n-queens
class Solution {
public:
    bool IsSafe(vector<string>& board, vector<vector<string>>& ans, int row,
                int col, int n) {
        int val;
        for (int i = 0; i <= row; i++) {
            if (board[row][i] == 'Q' || board[i][col] == 'Q') {
                return false;
            }
            if (row <= col) {
                val = i + (col - row);
                if (val < n && board[i][val] == 'Q')
                    return false;
            } else {
                val = i + (row - col);
                if (val < n && board[val][i] == 'Q')
                    return false;
            }
            if ((row + col) - i < n && board[i][(row + col) - i] == 'Q')
                return false;
        }
        return true;
    }
    void nQueens(vector<string>& board, vector<vector<string>>& ans, int row,
                 int n) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (IsSafe(board, ans, row, j, n)) {
                board[row][j] = 'Q';
                nQueens(board, ans, row + 1, n);
            }
            board[row][j] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string dot = ".";
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        nQueens(board, ans, 0, n);
        return ans;
    }
};
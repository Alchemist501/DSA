//Problem := leetcode.com/problems/n-queens-ii
class Solution {
public:
    bool IsSafe(vector<string>& board, int row, int col, int n) {
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
    void NQueens(vector<string>& board, int &ans, int row, int n) {
        if (row == n) {
            ans++;
            return;
        }
        for (int i = 0; i < n; i++) {
            if (IsSafe(board, row, i, n)) {
                board[row][i] = 'Q';
                NQueens(board, ans, row + 1, n);
            }
            board[row][i] = '.';
        }
    }
    int totalNQueens(int n) {
        int ans = 0;
        vector<string> board(n,string(n,'.'));
        NQueens(board, ans, 0, n);
        return ans;
    }
};
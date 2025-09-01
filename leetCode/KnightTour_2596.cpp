// Problem: https://leetcode.com/problems/check-knight-tour-configuration
class Solution {
 public:
  bool recursiveCalls(vector<vector<int>>& grid, int row, int col, int num,
                      int n) {
    vector<vector<int>> pos = {{2, 1},   {2, -1}, {1, 2},   {1, -2},
                               {-1, -2}, {-1, 2}, {-2, -1}, {-2, 1}};
    if (num >= n * n - 1) return true;
    for (auto ele : pos) {
      row += ele[0];
      col += ele[1];
      if (row >= 0 && row < n && col >= 0 && col < n &&
          num + 1 == grid[row][col]) {
        return recursiveCalls(grid, row, col, grid[row][col], n);
      }
      row -= ele[0];
      col -= ele[1];
    }
    return false;
  }
  bool checkValidGrid(vector<vector<int>>& grid) {
    int n = grid.size();
    if (grid[0][0] != 0) return false;
    return recursiveCalls(grid, 0, 0, grid[0][0], n);
  }
};
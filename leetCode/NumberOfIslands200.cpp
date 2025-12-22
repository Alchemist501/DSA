class Solution {
 public:
  void bfs(vector<vector<char>>& grid, set<vector<int>>& visited, int i,
           int j) {
    vector<vector<int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    stack<vector<int>> st;
    st.push({i, j});
    visited.insert({i, j});
    while (!st.empty()) {
      int r = st.top()[0];
      int c = st.top()[1];
      st.pop();
      for (auto ele : dir) {
        int x = r + ele[0];
        int y = c + ele[1];
        if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() &&
            grid[x][y] == '1' && visited.find({x, y}) == visited.end()) {
          st.push({x, y});
          visited.insert({x, y});
        }
      }
    }
  }
  int numIslands(vector<vector<char>>& grid) {
    int count = 0;
    set<vector<int>> visited;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1' && visited.find({i, j}) == visited.end()) {
          count++;
          bfs(grid, visited, i, j);
        }
      }
    }
    return count;
  }
};
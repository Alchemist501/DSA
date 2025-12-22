class Solution {
 public:
  int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int dx, dy, i, t = 0;
    for (i = 1; i < points.size(); i++) {
      dx = abs(points[i][0] - points[i - 1][0]);
      dy = abs(points[i][1] - points[i - 1][1]);
      t += max(dx, dy);
    }
    return t;
  }
};
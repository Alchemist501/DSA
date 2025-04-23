//Problem := leetcode.com/problems/spiral-matrix
class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> res;
            int n = matrix.size() - 1;
            int m = matrix[0].size() - 1;
            while (!matrix.empty()) {
                while (!matrix[0].empty()) {
                    res.push_back(matrix[0][0]);
                    matrix[0].erase(matrix[0].begin());
                }
                matrix.erase(matrix.begin());
                if (matrix.empty())
                    break;
                n = matrix.size() - 1;
                m = matrix[0].size() - 1;
                for (int k = 0; k <= n; k++) {
                    res.push_back(matrix[k][m]);
                    matrix[k].pop_back();
                    if (matrix[k].empty()) {
                        matrix.erase(matrix.begin());
                        k--;
                        n = matrix.size() - 1;
                    }
                }
                if (matrix.empty())
                    break;
                while (!matrix[n].empty()) {
                    res.push_back(matrix[n][matrix[n].size() - 1]);
                    matrix[n].pop_back();
                }
                matrix.pop_back();
                if (matrix.empty())
                    break;
                n = matrix.size() - 1;
                for (int k = n; k >= 0; k--) {
                    res.push_back(matrix[k][0]);
                    matrix[k].erase(matrix[k].begin());
                    if (matrix[k].empty())
                        matrix.pop_back();
                }
            }
            return res;
        }
    };
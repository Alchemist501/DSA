//Prolem:=leetcode.com/problems/find-missing-and-repeated-values
class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int a, b, n = grid.size();
            int size = n * n;
            vector<int> count(size + 1, 0);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    count[grid[i][j]]++;
                }
            }
            for (int i = 1; i <= size; i++) {
                if (count[i] == 2)
                    a = i;
                else if (count[i] == 0)
                    b = i;
            }
            return {a, b};
        }
    };
//Problem := leetcode.com/problems/search-a-2d-matrix
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int mid;
            int m = matrix.size();
            int n = matrix[0].size();
            cout << 0%2 << endl;
            int start = 0, end = (n * m) - 1;
            while (start <= end) {
                mid = start + (end - start) / 2;
                if (matrix[mid / n][mid % n] == target)
                    return true;
                else if (matrix[mid / n][mid % n] > target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            return false;
        }
    };
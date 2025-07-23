//Problem: leetcode.com/problems/subsets
class Solution {
public:
    void Subsets(vector<int>& nums, vector<int> Subset,
                 vector<vector<int>>& ans, int i, int n) {
        if (i == n) {
            ans.push_back(Subset);
            return;
        }
        Subset.push_back(nums[i]);
        Subsets(nums, Subset, ans, i + 1, n);
        Subset.pop_back();
        Subsets(nums, Subset, ans, i + 1, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> Subset;
        vector<vector<int>> ans;
        Subsets(nums, Subset, ans, 0, n);
        return ans;
    }
};
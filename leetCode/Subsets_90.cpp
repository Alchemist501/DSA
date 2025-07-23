//Problem : leetcode.com/problems/subsets-ii
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
        int idx = i + 1;
        while (idx < n && nums[idx] == nums[idx - 1])
            idx++;
        Subsets(nums, Subset, ans, idx, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int> Subset;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        Subsets(nums, Subset, ans, 0, n);
        return ans;
    }
};
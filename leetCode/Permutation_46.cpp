//Problem: leetcode.com/problems/permutations
class Solution {
public:
    void PlaceElement(vector<int>& nums, vector<vector<int>>& ANS, int i) {
        int n = nums.size();
        if (i == n) {
            ANS.push_back(nums);
            return;
        }
        for (int idx = i; idx < n; idx++) {
            swap(nums[idx], nums[i]);
            PlaceElement(nums, ANS, i + 1);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ANS;
        PlaceElement(nums, ANS, 0);
        return ANS;
    }
};
//Problem Description => https://leetcode.com/problems/maximum-subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int MAX = INT_MIN;
        for (int val : nums) {
            sum += val;
            MAX = max(sum, MAX);
            if (sum < 0) {
                sum = 0;
            }
        }
        return MAX;
    }
};
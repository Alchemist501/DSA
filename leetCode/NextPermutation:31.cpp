//Problem Description := https://leetcode.com/problems/next-permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return;
        int small = n - 1, big = n - 1;
        while (big > 0) {
            if (nums[big] <= nums[(big--) - 1]) {
                if (big == 0) {
                    reverse(nums.begin(),nums.end());
                    return;
                }
            } else
                break;
        }
        while (nums[big] >= nums[small])
            small--;
        swap(nums.at(big), nums.at(small));
        reverse(nums.begin() + big + 1, nums.end());
    }
};
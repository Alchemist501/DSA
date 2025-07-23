//Problem Description => https://leetcode.com/problems/sort-colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid = 0, low = 0, high = n - 1;
        while (mid <= high) {
            if (nums.at(mid) == 0) {
                swap(nums.at(mid), nums.at(low));
                low++;
                mid++;
            } else if (nums.at(mid) == 1)
                mid++;
            else {
                swap(nums.at(mid), nums.at(high));
                high--;
            }
        }
    }
};
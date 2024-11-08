//problem description : https://leetcode.com/problems/search-in-rotated-sorted-array/description
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k = 0,st = 0;
        int end = nums.size() - 1;
        for (int i = 0; i < end; i++) {
            if (nums.at(i) > nums.at(i + 1)) {
                k = end - i;
                break;
            }
        }
        std::sort(nums.begin(), nums.end());
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (target < nums.at(mid))
                end = mid - 1;
            else if (target > nums.at(mid))
                st = mid + 1;
            else
                return ((nums.size() - k) + mid) % nums.size();
        }
        return -1;
    }
};
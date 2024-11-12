//problem description : https://leetcode.com/problems/search-in-rotated-sorted-array/description
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            mid = st + (end - st) / 2;
            cout << mid;
            if (nums.at(mid) == target)
                return mid;
            else if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target <= nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            } else {
                if (nums[mid] <= target && target <= nums[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
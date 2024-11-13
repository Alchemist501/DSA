//Problem Description => https://leetcode.com/problems/single-element-in-a-sorted-array/description
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() < 2) return nums.at(0);
        int st = 1;
        int end = nums.size() - 2;
        while(st < end){
            int mid = st + (end - st)/2;
            mid = (mid % 2 != 0) ? mid + 1: mid;
            if(nums.at(mid) != nums.at(mid + 1) && nums.at(mid) != nums.at(mid - 1)) return nums.at(mid);
            if(nums.at(mid) != nums.at(mid - 1)) st = mid + 1;
            else end = mid - 1;
        }
        return nums.at(st) != nums.at(st - 1) ? nums.at(st - 1): nums.at(end + 1);
    }
};
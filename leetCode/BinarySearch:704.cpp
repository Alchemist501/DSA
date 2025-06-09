//Problem: leetcode.com/problems/binary-search
class Solution {
public:
    int BinarySearch(vector<int>& nums, int start, int end, int target){
        if(start > end) return -1;
        int mid = start + (end - start)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) return BinarySearch(nums, start, mid - 1, target);
        else return BinarySearch(nums, mid + 1, end, target);
    }
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums,0,nums.size() - 1, target);
    }
};
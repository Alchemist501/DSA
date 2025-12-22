class Solution {
 public:
  int longestMountain(vector<int>& nums) {
    int n = nums.size();
    int left, right, length = 0, peak = 1;
    while (peak < n - 1) {
      if (nums[peak - 1] < nums[peak] && nums[peak] > nums[peak + 1]) {
        left = peak - 1;
        while (left > 0 && nums[left] > nums[left - 1]) left -= 1;
        right = peak + 1;
        while (right < n - 1 && nums[right] > nums[right + 1]) right += 1;
        length = max(right - left + 1, length);
        peak = right;
      } else {
        peak++;
      }
    }
    return length;
  }
};
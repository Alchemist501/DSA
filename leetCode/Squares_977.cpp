class Solution {
 public:
  vector<int> sortedSquares(vector<int>& nums) {
    int pos = nums.size() - 1;
    vector<int> res(nums.size(), 0);
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
      if (abs(nums[left]) > abs(nums[right])) {
        res[pos] = nums[left] * nums[left];
        left++;
      } else {
        res[pos] = nums[right] * nums[right];
        right--;
      }
      pos--;
    }
    return res;
  }
};
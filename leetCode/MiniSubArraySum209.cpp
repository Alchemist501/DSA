class Solution {
 public:
  int minSubArrayLen(int target, vector<int>& nums) {
    int currentLength;
    int minLength = nums.size() + 1;
    int sum = 0;
    int start = 0;
    for (int end = 0; end < nums.size(); end++) {
      sum += nums[end];
      while (sum >= target) {
        currentLength = end - start + 1;
        if (currentLength < minLength) {
          minLength = currentLength;
        }
        sum -= nums[start];
        start++;
      }
    }
    return (minLength == nums.size() + 1) ? 0 : minLength;
  }
};
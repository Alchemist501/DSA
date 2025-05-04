//Problem := leetcode.com/problems/3sum
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            int n = nums.size();
            int i, j, k, sum = 0;
            vector<vector<int>> ans;
            sort(nums.begin(), nums.end());
            for (i = 0; i < n - 2; i++) {
                if (i > 0 && nums[i] == nums[i - 1])
                    continue;
                j = i + 1;
                k = n - 1;
                while (j < k) {
                    if (j > i + 1 && nums[j] == nums[j - 1]) {
                        j++;
                        continue;
                    }
                    sum = nums[i] + nums[j] + nums[k];
                    if (sum < 0)
                        j++;
                    else if (sum > 0)
                        k--;
                    else {
                        ans.push_back({nums[i], nums[j++], nums[k--]});
                    }
                }
            }
            return ans;
        }
    };
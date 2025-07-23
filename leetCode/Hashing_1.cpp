//Problem := leetcode.com/problems/two-sum
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> map;
            for (int i = 0; i < nums.size(); i++) {
                int first = nums[i];
                int second = target - first;
                if (map.find(second) != map.end()) {
                    return {i, map[second]};
                }
                map[first] = i;
            }
            return {};
        }
    };
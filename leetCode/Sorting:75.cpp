class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums.at(i) > nums.at(j)) {
                    swap(nums.at(i), nums.at(j));
                }
            }
        }
    }
}
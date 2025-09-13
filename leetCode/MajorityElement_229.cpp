//Problem: https://leetcode.com/problems/majority-element-ii
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x = 0, y = 0, c1 = 0, c2 = 0;
        for (auto num : nums) {
            if (x == num)
                c1++;
            else if (y == num)
                c2++;
            else if (c1 == 0) {
                x = num;
                c1 = 1;
            } else if (c2 == 0) {
                y = num;
                c2++;
            } else {
                c1--;
                c2--;
            }
        }
        c1 = c2 = 0;
        for (auto num : nums) {
            if (num == x)
                c1++;
            else if (num == y)
                c2++;
        }
        if (c1 > nums.size() / 3 && c2 > nums.size() / 3)
            return {x, y};
        if (c1 > nums.size() / 3)
            return {x};
        if (c2 > nums.size() / 3)
            return {y};
        return {};
    }
};
// Problem Description : https://leetcode.com/problems/remove-element/description
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};
int main(){
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int k = s.removeElement(nums, val);
    cout << k << "\n";
}
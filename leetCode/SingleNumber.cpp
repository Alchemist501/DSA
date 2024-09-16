//Problem Description => https://leetcode.com/problems/single-number/description
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for (int N : nums) num = num ^ N;
        return num;
    }
};
int main(){
    Solution s;
    vector <int> nums = {4,1,2,1,2};
    cout << s.singleNumber(nums) << endl;
    return 0;
}
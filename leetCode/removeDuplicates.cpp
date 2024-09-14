//Problem Description : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] != nums[i+1]){
                nums[temp] = nums[i];
                temp++;
            }
        }
        nums[temp]=nums[nums.size()-1];
        temp++;
        return temp;
    }
};
Solution s;
int main(){
    vector<int> nums = {1,2,2,2,3,3,4};
    cout << s.removeDuplicates(nums) << "\n";
}
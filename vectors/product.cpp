#include<iostream>
#include<vector>
using namespace std;
vector <int> BruteForce(vector <int> &nums){
    int n = nums.size();
    vector <int> ans(n,1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            ans[i] = ans[i]*nums.at(j);
        }
    }
    return ans;
}
//Optimised Time Complexity O(n):
vector <int> OptimisedApproach1(vector <int> &nums){
    int n = nums.size();
    vector <int> ans(n,1);
    vector <int> prefix(n,1);
    vector <int> suffix(n,1);
    for(int i = 1; i < n; i++){
        prefix.at(i) = prefix.at(i - 1) * nums.at(i - 1);
    }
    for(int i = n - 2; i >= 0; i--){
        suffix.at(i) = suffix.at(i + 1)*nums.at(i + 1);
    }
    for (int i = 0; i < n; i++){
        ans[i] = suffix.at(i) * prefix.at(i);
    }
    return ans;
}
//Optimised Space Complexity O(1):
vector <int> OptimisedApproach2(vector <int> &nums){
    int n = nums.size();
    vector <int> ans(n,1);
    for(int i = 1; i < n; i++){
        ans[i] = ans[i - 1]*nums[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans.at(i) << "\t";
    }
    return ans;
}
int main(){
    vector <int> nums = {1,2,3,4};
    vector <int> ans = BruteForce(nums);
    for (int i = 0; i < int(nums.size()); i++)
    {
        cout << ans.at(i) << "\t";
    }
    cout << endl;
    ans = OptimisedApproach1(nums);
    for (int i = 0; i < int(nums.size()); i++)
    {
        cout << ans.at(i) << "\t";
    }
    OptimisedApproach2(nums);
    return 0;
}
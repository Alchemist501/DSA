#include<vector>
#include<iostream>
using namespace std;
void PS(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(auto x : ans)
            cout << x << " ";
        cout << endl;
        return;
    }
    ans.push_back(arr[i]); // Include the current element
    PS(arr, ans, i + 1);  // Recursive call
    ans.pop_back(); // Exclude the current element
    PS(arr, ans, i + 1); //Backtrack and call again
}
int main(){
    vector<int> ans;
    vector <int> arr = {1, 2, 3};
    PS(arr,ans,0);
    return 0;
}
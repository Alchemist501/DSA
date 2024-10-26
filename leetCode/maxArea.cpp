//Problem Description := https://leetcode.com/problems/container-with-most-water/description
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector <int> & height){
    int lp = 0, rp = height.size() - 1, maxArea = 0, len = 0;
    while(lp < rp){
        len = min(height.at(lp),height.at(rp));
        maxArea = max(maxArea, len*(rp - lp));
        height.at(lp) < height.at(rp)? lp++ : rp--;
    }
    return maxArea;
}
int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    return 0;
}
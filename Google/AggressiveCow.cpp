#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool IsValid(vector <int> &plots, int N,int m, int min){
    int cows = 1;
    int lastPos = plots.at(0);
    for(int i = 1; i < N; i++){
        if((plots.at(i) - lastPos) >= min){
            cows++;
            lastPos = plots.at(i);
        }
        if(cows == m) return true;
    }
    return false;
}
int getDistance(vector <int> &arr,int N, int C){
    sort(arr.begin(),arr.end());
    int st = 1, end = arr[N-1]-arr[0], ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(IsValid(arr,N,C,mid)){
            ans = mid;
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans; 
}
int main(){
    int N = 5, C = 3;
    vector <int> plots = {1,2,8,4,9};
    cout << getDistance(plots,N,C) << endl;
    return 0;
}
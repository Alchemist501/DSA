#include<vector>
#include<iostream>
using namespace std;

bool IsPossible(vector<int> &length, int n, int m, int mid){
    int p = 1;
    int blocks = 0;
    for(int i = 0; i < n; i++){
        if(length.at(i) > mid) return false;
        if(length.at(i) + blocks <= mid)
            blocks += length.at(i);
        else{
            p++;
            blocks = length.at(i);
        }
    }
    return p <= m;
}

int Partition(vector <int> &length, int n, int m){
    int ans,mid,st = 0,sum = 0; 
    for(int i = 0; i < n; i++)
        sum += length.at(i);
    int end = sum;
    while(st <= end){
        mid = st + (end - st)/2;
        if(IsPossible(length,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else st = mid + 1;
    }
    return ans;
}

int main(){
    vector <int> length = {40,30,10,20};
    int n = length.size();
    int m = 2;
    cout << Partition(length,n,m) << endl;
    return 0;
}
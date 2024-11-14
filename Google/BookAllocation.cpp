#include<vector>
#include<numeric>
#include<iostream>
using namespace std;
bool isValid(vector <int> &pages,int n, int m, int max){
    int st = 1;
    int page = 0;
    for(int i = 0; i < n; i++){
        if(pages.at(i) > max) return false;
        if(page + pages.at(i) <= max) page += pages.at(i);
        else{
            st++;
            page = pages.at(i);
        }
    }
    return st > m ? false : true;
}
int Allocate(vector <int> &pages,int n, int m){
    int mid,ans,st = 0;
    int end = accumulate(pages.begin(),pages.end(),0);
    while(st <= end){
        mid = st + (end - st)/2;
        if(isValid(pages,n,m,mid)){
            ans = mid;
            end = mid - 1;
        } else st = mid + 1;
    }
    return ans;
}
int main(){
    vector <int> pages = {2,1,7,4,9,8};
    int n = 6, m = 3;
    cout << Allocate(pages,n,m) << endl;
    return 0;
}
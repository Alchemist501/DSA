#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {4,1,5,2,3};
    int n = v.size();
    for(int i = 1; i < n; i++){
        int curr = v.at(i);
        int prev = i - 1;
        while(prev >= 0 && v[prev] > curr){
            v[prev + 1] = v[prev];
            prev --;
        }
        v[prev + 1] = curr;
    }
    for(int i : v){
        cout << i << endl;
    }
    return 0;
}
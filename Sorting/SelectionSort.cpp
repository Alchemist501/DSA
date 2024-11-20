#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {4,1,5,2,3};
    int n = v.size();
    for(int i = 0; i < n - 1; i++){
        int SmallIdx = i;
        for(int j = i + 1; j < n; j++){
            if(v.at(j) < v.at(SmallIdx)) SmallIdx = j;
        }
        swap(v.at(i),v.at(SmallIdx));
    }
    for(int i : v){
        cout << i << endl;
    }
    return 0;
}
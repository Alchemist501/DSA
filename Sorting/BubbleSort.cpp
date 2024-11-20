#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector <int> arr = {4,1,5,2,3};
    int n = arr.size();
    for(int i = 0; i < n; i++){
        bool isSwap = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            } 
        }
        if(!isSwap) break;
    }
    for(int i : arr)
        cout << i << endl;
    return 0;
}
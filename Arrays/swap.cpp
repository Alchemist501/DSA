//WAF to swap max and min number of an array
#include<iostream>
using namespace std;
int main(){
    int sz , i = 0 , minN = INT16_MAX , maxN = INT16_MIN;
    cout << "Enter the number of elements in the array : ";
    cin >> sz;
    int arr[sz];
    for(i = 0 ; i < sz; i++){
        cout << "Enter the element at index " << i <<" : ";
        cin >> arr[i];
        minN = min(minN,arr[i]);
        maxN = max(maxN,arr[i]);
    }
    for(i = 0; i < sz; i++){
        if(arr[i] == minN){
            arr[i] = maxN;
            continue;
        }else if(arr[i] == maxN){
            arr[i] = minN;
        }
    }
    for(i = 0 ; i < sz; i++){
        cout << arr[i] <<"\t";
    }
    cout << endl;
    return 0;
}
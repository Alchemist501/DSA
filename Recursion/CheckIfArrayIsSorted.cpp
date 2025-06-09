#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    if(n == 0 || n == 1) return true;
    if(arr[n] < arr[n - 1]) return false;
    else return isSorted(arr, n - 1);
}
int main(){
    int arr [] = {1, 2, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(isSorted(arr, n -1)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}
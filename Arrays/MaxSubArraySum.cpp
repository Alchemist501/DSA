//Brute Force Approach
#include<iostream>
using namespace std;
int main(){
    int st , end , len , sum = 0 , Max ;
    cout << "Enter the number of elements in the array : ";
    cin >> len;
    int arr[len];
    for(int i = 0 ; i < len ; i++){
        cout << "Enter the element at index " << i <<" : ";
        cin >> arr[i];
    }
    for(st = 0; st < len ; st ++){
        for(end = st; end < len ; end ++){
            sum += arr[end];
            cout << sum << endl;
        }
        Max = max(sum,Max);
        sum = 0;
    }
    cout << "max is " << Max << endl;
    return 0;
}
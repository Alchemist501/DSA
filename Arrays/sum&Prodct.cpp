//WAF to calculate sum and product of all numbers in an array
#include<iostream>
using namespace std;
int main(){
    int sz,i=0,sum=0,product = 1;
    cout << "Enter the number of elements in the array : ";
    cin >> sz;
    int arr[sz];
    for(i = 0 ; i < sz; i++){
        cout << "Enter the element at index " << i <<" : ";
        cin >> arr[i];
        sum += arr[i];
        product*= arr[i];
    }
    cout << "The sum of elements of array is "<<sum<<" and the product is "<<product<<endl;
    return 0;
}
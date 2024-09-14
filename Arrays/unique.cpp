//WAF to print all the unique values in an array
#include<iostream>
using namespace std;
int main(){
    int sz,i=0;
    cout << "Enter the number of elements in the array : ";
    cin >> sz;
    int arr[sz];
    bool visited[sz] = {false};
    for(i = 0 ; i < sz; i++){
        cout << "Enter the element at index " << i <<" : ";
        cin >> arr[i];
    }
    cout <<"The unique elements in the array are : "<<endl;
    for(i = 0 ; i < sz; i++){
        if(!visited[i]){
            cout << arr[i] <<"\t";
            for(int j = i; j < sz; j++){
                if(arr[i] == arr[j])
                    visited[j] = true;
            }
        }
    }
    cout << endl;
    return 0;
}
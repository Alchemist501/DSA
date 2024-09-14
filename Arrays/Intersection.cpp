//WAF to print intersection of 2 arrays
#include<iostream>
using namespace std;
int main(){
    int sz1 , sz2 , i=0;
    cout << "Enter the number of elements in the array1 : ";
    cin >> sz1;
    int arr1[sz1];
    cout << "Enter the number of elements in the array2 : ";
    cin >> sz2;
    int arr2[sz2];
    int sz = max(sz1,sz2);
    bool visited[sz] = {false};
    cout << "Enter the elements of array1 :"<<endl;
    for(i = 0 ; i < sz1; i++){
        cout << "Enter the element at index " << i <<" : ";
        cin >> arr1[i];
    }
    cout << "Enter the elements of array2 :"<<endl;
    for(i = 0 ; i < sz2; i++){
        cout << "Enter the element at index " << i <<" : ";
        cin >> arr2[i];
    }
    cout << "Array 1" << endl;
    for(i = 0; i < sz1; i++){
        cout << arr1[i] <<"\t";
    }
    cout << endl;
    cout << "Array 2" << endl;
    for(i = 0; i < sz2; i++){
        cout << arr2[i] <<"\t";
    }
    cout << endl;
    cout <<"The intersection of both the arrays are : "<< endl;
    int k = 0;
    for(i = 0 ; i < sz1; i++){
        for(int j = 0; j < sz2; j++){
            if(arr1[i] == arr2[j] && !visited[k]){
                cout << arr1[i] <<"\t";
                for(int l = i; l < sz; l++){
                    if(arr1[k] == arr1[l])
                        visited[l] = true;
            }
            }
        } k++;
    }
    cout << endl;
    return 0;
}
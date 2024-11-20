#include<iostream>
#include<vector>
using namespace std;
//Iteration
int BinarySearch(vector <int> array,int target){
    int st = 0;
    int end = array.size() -1 ;
    while(st <= end){
        int mid = st +(end - st)/2;
        if(array[mid] < target){
            st = mid + 1;
        }else if(array[mid] > target){
            end = mid - 1;
        }else {
            return mid;
        }
    }
    return -1;
}
//Recursion
int Binarysearch(vector <int> array,int st , int end, int tar){
    int mid = st+(end - st)/2;
    while(st <= end){
        if(array[mid] < tar)
            return Binarysearch(array,mid + 1,end,tar);
        else if(array[mid] > tar) return Binarysearch(array,st,mid - 1,tar);
        else return mid;
    }
    return -1;
}
int main(){
    int target = 9;
    vector <int> array= {1,2,3,4,5,6};
    cout << target << " is present at index " << BinarySearch(array,target) << endl;
    cout << target << " is present at index " << Binarysearch(array,0,array.size() - 1,target) << endl;
    return 0;
}
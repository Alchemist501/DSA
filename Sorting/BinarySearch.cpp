#include<iostream>
#include<vector>
using namespace std;
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
int main(){
    int target = 6;
    vector <int> array= {1,2,3,4,5,6};
    cout << target << " is present at index " << BinarySearch(array,target) << endl;
    return 0;
}
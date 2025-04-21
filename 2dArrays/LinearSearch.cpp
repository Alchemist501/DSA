#include<iostream>
using namespace std;
pair<int, int> LinearSearch(int arr[][4], int rows, int cols, int key){
    pair <int, int> loc;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                loc.first = i;
                loc.second = j;
                return loc;
            }
        }
    }
    return {-1,-1};
}
int main(){
    int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    int rows = 3;
    int cols = 4;
    int key = 81;
    cout << "The key is found at : < " << LinearSearch(arr,rows,cols,key).first << ", " << LinearSearch(arr,rows,cols,key).second << " >"<< endl;
    return 0;
}
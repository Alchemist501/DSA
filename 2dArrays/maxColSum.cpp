#include<iostream>
#include<climits>
using namespace std;
int getColSum(int arr[][4], int rows, int cols){
    int ColSum,maxColSum = INT_MIN;
    for(int i = 0; i < cols; i++){
        ColSum = 0;
        for(int j = 0; j < rows; j++){
            ColSum += arr[j][i];
        }
        maxColSum = max(maxColSum, ColSum);
    }
    return maxColSum;
}
int main(){
    int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    int rows = 3;
    int cols = 4;
    cout << "The maximum column sum is : " << getColSum(arr,rows,cols) << endl;
    return 0;
}
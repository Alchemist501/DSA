#include<iostream>
#include<vector>
using namespace std;
int main(){
    int len = 0;
    int mostWater = 0;
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    // BruteForce Approach
    for(int i = 0; i < int(height.size()); i++){
        for(int j = i + 1; j < int(height.size());j++){
            len = min(height.at(i),height.at(j));
            mostWater = max(mostWater, len*(j - i));
        }
    }
    cout << mostWater << endl;
    return 0;
}
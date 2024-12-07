#include<vector>
#include<iostream>
using namespace std;
vector <int> BruteForce(vector <int> &V){
    int n = V.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++)
            if(V.at(i) > V.at(j)) swap(V.at(i),V.at(j));
    }
    return V;
}
vector <int> Optimised(vector <int> &V){
    int n = V.size();
    int red = 0, white = 0, blue = 0;
    for(int i : V){
        if(i == 0) red++;
        else if(i == 1) white++;
        else blue++;
    }
    int clr = 0;
    for(int i = 0; i < n; i++){
        if( i == red) clr++;
        else if(i == red+white) clr++;
        V.at(i) = clr;
    }
    return V;
}
//Dutch National Flag Algorithm
vector <int> Optimal(vector <int> &v){
    int n = v.size();
    int low = 0,mid = 0,high = n - 1;
    while(mid <= high){
        if(v.at(mid) == 0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else if(v.at(mid) == 1)
            mid++;
        else{
            swap(v[mid],v[high]);
            high--;
        } 
    }
    return v;
}
void printArray(vector <int> V){
    for(int i : V)
        cout << i << "\t";
    cout << endl;
}
int main(){
    vector <int> V = {2,0,2,1,1,0,2};
    cout << "BruteForce Approach : " << endl; 
    printArray(BruteForce(V));
    cout << "Optimised Approach : " << endl; 
    printArray(Optimised(V));
    cout << "Optimal Approach : " << endl;
    printArray(Optimal(V));
    V = Optimal(V);
    return 0;
}
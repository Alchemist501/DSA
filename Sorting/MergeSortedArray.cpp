#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector <int> M = {0,0,0};
    vector <int> N = {2,6,7};
    int m = -1 , n = 2;
    int idx = m + n + 1;
    while(m >= 0 && n >= 0){
        if(M[m] > N[n]) M[idx--] = M[m--];
        else M[idx--] = N[n--];
    }
    while(n >= 0) M[idx--] = N[n--];
    for(int i : M){
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}
#include<iostream>
using namespace std;
int reverseNum(int N){
    int revNum = 0;
    while(N!=0){
        revNum = (revNum * 10) + (N%10);
        N = N / 10;
    }
    return revNum;
}
int main(){
    cout << reverseNum(1234) << endl;
    return 0;
}
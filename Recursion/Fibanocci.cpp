#include<iostream>
using namespace std;
int Fibanocci(int n){
    if(n < 0){
        cout << "Enter a whole number :";
        return -1;
    }
    if(n == 0) return n;
    else if(n ==1) return n;
    else return (Fibanocci(n - 2) + Fibanocci(n - 1)); 
    return -1;
}
int main(){
    int n;
    cout << "Enter the position Fibanocci term: ";
    cin >> n;
    cout << Fibanocci(n) << endl;
    return 0;
}
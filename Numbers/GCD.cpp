#include<iostream>
using namespace std;
int GCD(int a, int b){
    int gcd = 1;
    if(a == 0) return b;
    else if(b == 0) return a;
    for(int i = 1; i <= min(a,b); i++){
        if(a%i == 0 && b%i == 0) gcd = i;
    }
    return gcd;
}
//Euclid's Algorithm
int Euclid(int a, int b){
    if (a == b) return a;
    else if(a == 0) return b;
    else if(b == 0) return a;
    else if(a < b) return Euclid(a,b - a);
    else  return Euclid(a - b, b);
}
int OptimisedGCD(int a, int b){
    if (b == 0) return a;
    return OptimisedGCD(b, a%b);
}
int main(){
    int a = 1234, b = 12;
    cout << GCD(a,b) << endl;
    cout << "Using Euclid's algorithm : " << Euclid(a,b) << endl;
    cout << "Optimised Euclid's algorithm : " << OptimisedGCD(a,b) << endl;
    cout << "LCM of " << a <<", "<< b << " is : " << (a*b)/OptimisedGCD(a,b) << endl;
    return 0;
}
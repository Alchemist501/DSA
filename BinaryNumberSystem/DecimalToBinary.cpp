#include<iostream>
using namespace std;
void ConversionRecursion(int n){
    if((n / 2)==  0){
        cout << n%2;
        return ;
    }
    ConversionRecursion(n/2);
    cout << n%2;
}
void ConversionLoop(int n){
    int rem;
    int bin = 0;
    int pow = 1;
    while(n > 0){
        rem = n%2;
        n/=2;
        bin+=(rem*pow);
        pow*=10;
    }
    cout << bin;
}
int main(){
    int dec;
    cout << "Enter the decimal number : ";
    cin >> dec;
    ConversionRecursion(dec);
    cout << endl;
    ConversionLoop(dec);
    cout <<endl;
    return 0;
}
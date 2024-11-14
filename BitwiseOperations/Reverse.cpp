//WAF to reverse an int 
#include<iostream>
using namespace std;
int main(){
    int num,reversed = 0;
    cout << "Enter a number : ";
    cin >> num;
    while(num !=0){
        int ls = num & 1;
        cout << ls << endl;
        reversed <<= 4;
        reversed |= ls;
        num >>= 1;
        cout << num << endl;
    }
    cout << "After reversing ::" <<reversed << endl;
    return 0;
}
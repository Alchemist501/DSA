//Check whether a number is a power of 2 or not without loops
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num ;
    cout << "Enter a number : ";
    cin >> num;
    if((8 << int(log(num)/log(2))) == (8 * num))
        cout << num << " is a power of 2" << endl;
    else
        cout << num << " is not a power of 2" << endl;
    return 0;
}

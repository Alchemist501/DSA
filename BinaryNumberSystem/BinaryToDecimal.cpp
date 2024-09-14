#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int dec = 0, i = 0;
    int bin;
    cout << "Enter the binary number : ";
    cin >> bin;
    while(bin>0){
        dec += (bin%10)*pow(2,i++);
        bin/=10;
    }
    cout << dec << endl;
    return 0;
}
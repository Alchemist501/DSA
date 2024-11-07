#include<iostream>
using namespace std;
int main(){
    int H[] = {4,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        cout << "Value of"  << " arr[" << i << "] is "
             << *(H + i) << endl;
        cout << "Address of " << *(H + i) << " is  "
             << H + i << endl
             << endl;
    }
    return 0;
}
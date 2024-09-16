#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ele , input = 0 , stop = 0;
    vector <int> v;
    while(stop == 0){
        cout << "Enter 1 to stop entering elements : ";
        cin >> input;
        switch(input){
            case 1: stop = 1;
                break;
            default:{
                cout << "Enter the element : ";
                cin >> ele;
                v.push_back(ele);
                break;
            }
        }
    }
    cout << "Enter the element u r searching for :";
    cin >> input;
    for(int ele: v) if(ele == input) cout << "Element found !!!!" << endl; //Linear Search
    cout << "The vector is : "<< endl;
    for(int val: v) cout << val << "\t";
    cout << endl;
    return 0;
}
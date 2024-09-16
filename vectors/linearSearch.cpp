#include<iostream>
#include<vector>
using namespace std;
int input;
vector<int> v;
vector<int> Inputele(){
    int ele , input = 0 , stop = 0;
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
    return v;
}
void display(vector <int> &v){
    cout << "The vector is : "<< endl;
    for(int val: v) cout << val << "\t";
    cout << endl;
}
int main(){
    v = Inputele();
    display(v);
    cout << "Enter the element u r searching for :";
    cin >> input;
    for(int ele: v) if(ele == input) cout << "Element found !!!!" << endl; //Linear Search
    display(v);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
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
void reverse(vector<int> &v){
    int end = v.size() - 2;
    while( end >= 0){
        v.push_back(v.at(end));
        v.erase(v.begin() + end);
        end--;
    }
    cout << "After reversing : " << endl;
    display(v);
}
int main(){
    v = Inputele();
    display(v);
    reverse(v);
    return 0;
}
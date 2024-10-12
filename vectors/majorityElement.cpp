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
bool BruteForceApproach(){
    int len = v.size();
    int count = 0;
    for(int val : v){
        count = 0;
        for(int ele : v){
            if(val == ele){
                count ++;
                if(count > len/2) {
                    cout << "The majority element in Brute Force approach is " << val << endl;
                    return true;
                }
            }
        }
    }
    return false;
}
void sort(vector<int> &v){
    int len = v.size();
    for(int i = 0; i < len;i++){
        for(int j = i + 1; j < len; j++){
            if(v[i] > v[j]) swap(v[i],v[j]);
        }
    }
    display(v);
}
bool OptimisedApproach(){
    sort(v);
    int ans = v[0];
    int len = v.size();
    int freq = 1;
    for(int i = 1; i < len; i++){
        if(v[i] == v[i - 1]){
            freq++;
        }else {
            freq = 1;
            ans = v[i];
        }
        if(freq > len/2) {
            cout << "The majority element in Brute Force approach is " << ans << endl;
            return true;
        }
    }
    return false;
}
bool MooreAlgo(){
    int len = v.size();
    int ans = 0 , freq = 0;
    for(int i = 0; i < len; i++){
        if(freq == 0) ans = v.at(i);
        if(ans == v.at(i)) freq++;
        else freq--;
    }
    if(freq != 0){
        cout << "The majority element in Moore's algorithm is " << ans << endl;
        return true;
    } else return false;
}
int main(){
    v = Inputele();
    display(v);
    if(!BruteForceApproach())
        cout << "Majority Element is not present in the array!" << endl;
    if(!OptimisedApproach())
        cout << "Majority Element is not present in the array!" << endl;
    if(!MooreAlgo())
        cout << "Majority Element is not present in the array!" << endl;
    return 0;
}
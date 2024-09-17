#include<iostream>
#include<vector>
using namespace std;
int input;
vector<int> v;
vector <int> ans;
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
// Brute Force Approach => O(n^2)
void PairSum(int input){
    int size = v.size();
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(v.at(i) + v.at(j) == input){
                ans.push_back(i);
                ans.push_back(j);
                display(ans);
                return;
            }
        }
    }
}
// Two Pointer Approach
void PairSum_Optimal(int target){
    int i = 0; 
    int PairSum;
    int size = v.size();
    int j = size - 1;
    while(i < j && i < size){
        PairSum = v.at(i) + v.at(j);
        if(PairSum > target){
            j --;
        }else if(PairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            display(ans);
            return ;
        }
    }
}
int main(){
    v = Inputele();
    display(v);
    cout << "Enter the target sum : ";
    cin >> input;
    PairSum(input);
    ans.pop_back();
    ans.pop_back();
    PairSum_Optimal(input);
    return 0;
}

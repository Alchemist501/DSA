#include<iostream>
#include<unordered_map>
using namespace std;
bool CheckZeros(unordered_map<char,int> map){
    for(auto ch:map){
        if(ch.second != 0) return false;
    }
    return true;
}
bool CheckPermutation(string s1,string s2){
    unordered_map<char,int> freq;
    for(auto ch: s1){
        freq[ch]++;
    }
    for(size_t i = 0; i < s1.length(); i++){
        freq[s2.at(i)]--;
    }
    if(CheckZeros(freq)) return true;
    for(size_t i = s1.length(); i < s2.length(); i++){
        freq[s2.at(i-s1.length())]++;
        freq[s2.at(i)]--;
        if(CheckZeros(freq)) return true;
    }
    return false;
}
int main(){
    string s1 = "&a";
    string s2 = "eidaa&";
    if(CheckPermutation(s1,s2)) cout << "Permutation found!" << endl;
    else cout << "Permutation not found!" <<endl;
    return 0;
}
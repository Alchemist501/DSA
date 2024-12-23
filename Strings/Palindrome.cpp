#include<string>
#include<iostream>
using namespace std;
bool PalindromeCheck(string str){
    int n = str.length();
    for(int i = 0; i < n; i++)
        if(str[i] != str[n - i - 1]) return false; 
    return true;
}
int main(){
    string str;
    cout << "Enter a string : " ;
    getline(cin,str);
    if(PalindromeCheck(str)){
        cout << str << " is a palindrome string";
    }else   cout << str << " is not a palindrome string!";
    cout << endl;
    return 0;
}
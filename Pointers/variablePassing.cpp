#include<iostream>
using namespace std;
// pass by value
void changeA(int a){
    cout << "Pass by Value :" << endl;
    a = 10;
    cout << "\ta in function: "<< a << endl;
}
// pass by reference using pointers
void changeAptr(int* a){
    cout << "Pass by Reference using pointer :" << endl;
    *a = 15;
    cout << "\ta in function: "<< *a << endl;
}
// pass by reference using alias
void changeAalias(int &b){
    cout << "Pass by Reference using alias :" << endl;
    b = 20;
    cout << "\tAlias b in function: "<< b << endl;
}
int main(){
    int a = 5;
    int* ptr = &a;
    changeA(a);
    cout << "\ta in main function : " << a << endl;
    changeAptr(ptr);
    cout << "\ta in main function : " << a << endl;    
    changeAalias(a);
    cout << "\ta in main function : " << a << endl;    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    //Addition
    cout << "Original value of a : " << *ptr << endl;
    cout << "After addition : " << ++*ptr <<endl;
    //Subtraction 
    cout << "Original value of a : " << *ptr << endl;
    cout << "After subtraction : " << --*ptr <<endl;
    //Multiplication
    cout << "Original value of a : " << *ptr << endl;
    *ptr *= 5;
    cout << "After multiplication : " << *ptr <<endl;
    //Division
    cout << "Original value of a : " << *ptr << endl;
    *ptr /= 5;
    cout << "After division : " << *ptr <<endl;
    //Modulus
    cout << "Original value of a : " << *ptr << endl;
    *ptr %= 5;
    cout << "Reminder : " << *ptr <<endl;
    return 0;
}
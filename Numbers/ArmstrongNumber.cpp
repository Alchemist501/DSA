#include<iostream>
using namespace std;
int armstrong = 0;
int Armstrong(int n){
    if(n < 10){
        armstrong += n*n*n;
        return armstrong;
    }else{
        armstrong += (n%10)*(n%10)*(n%10);
        return Armstrong(n/10);
    }
}
int main(){
    int n = 153;
    if (n == Armstrong(n)) cout << n << " is an armstrong number" << endl;
    else cout << n << " is not an armstrong number"<<endl;
    return 0;
}
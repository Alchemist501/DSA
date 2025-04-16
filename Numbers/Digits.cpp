#include<iostream>
using namespace std;
int sum = 0;
int count = 0;
void printNumbers(int N){
    if(N < 10){
        cout << N << endl;
        return;
    } else{
        printNumbers(N/10);
        cout << N%10 << endl;
    }
}
void SumOfDigits(int N){
    if(N < 10){
        sum += N;
        cout << "Sum of digits are : " << sum << endl;
        return;
    }else{
        sum += N%10;
        SumOfDigits(N/10);
    }
}
void CountDigits(int N){
    if(N < 10){
        count += 1;
        cout << "No of digits are : " << count << endl;
        return;
    }else{
        count += 1;
        CountDigits(N/10);
    }
}
int main(){
    int n = 3568;
    printNumbers(n);
    SumOfDigits(n);
    CountDigits(n);
    return 0;
}
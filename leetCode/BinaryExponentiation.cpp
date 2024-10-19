#include<iostream>
using namespace std;
double myPow(double x, int n) {
    double ans = 1;
    long BinF = n;
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;
    if (n < 0) {
        x = (1 / x);
        BinF = -BinF;
    }
    while (BinF > 0) {
        if (BinF % 2 == 1) {
            ans *= x;
        }
        x *= x;
        BinF /= 2;
    }
    return ans;
}
int main(){
    double x ;
    int n;
    cout << "Enter value for x :" ;
    cin >> x;
    cout << "Enter value for n : ";
    cin >> n;
    double ans = myPow(x,n);
    cout << x << "^" << n << " is " << ans << endl;
    return 0;
}
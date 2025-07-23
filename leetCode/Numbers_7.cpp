//Problem Description := https://leetcode.com/problems/reverse-integer
class Solution {
    public:
        int reverse(int N) {
            int revNum = 0;
            while (N != 0) {
                if(revNum > INT_MAX / 10 || revNum < INT_MIN / 10) return 0;
                revNum = (revNum * 10) + (N % 10);
                N = N / 10;
            }
            return revNum;
        }
    };
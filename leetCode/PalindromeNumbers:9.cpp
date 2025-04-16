//Problem Description := https://leetcode.com/problems/palindrome-number
class Solution {
    public:
        int Reverse(int num){
            int revNum = 0;
            while(num != 0){
                if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10) return 0;
                revNum = (revNum * 10) + (num % 10);
                num = num / 10;
            }
            return revNum;
        }
        bool isPalindrome(int x) {
            if ( x < 0) return false;
            return Reverse(x) == x;
        }
};
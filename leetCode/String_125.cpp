//Problem Description := leetcode.com/problems/valid-palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = n - 1;
        while (start < end) {
            if (!isalnum(s[start]))
                start++;
            else if (!isalnum(s[end]))
                end--;
            else if ((char)tolower(s[start++]) != (char)(tolower(s[end--])))
                return false;
        }
        return true;
    }
};
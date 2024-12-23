// Problem Description := leetcode.com/problems/remove-all-occurrences-of-a-substring
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i = 0;
        int N = s.length();
        int n = part.length();
        while (i <= N - n) {
            if (s.substr(i, n) == part) {
                s.erase(i, n);
                N = s.length();
                i = max(i - n, -1);
            }
            i++;
        }
        return s;
    }
};
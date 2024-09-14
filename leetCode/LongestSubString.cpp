//Problem Description :=https://leetcode.com/problems/longest-substring-without-repeating-characters/description
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int start = 0;
        int maxLength = 1;
        int len = s.length();
        for (int end = 1; end < len; end++) {
            i = start;
            while (i < end) {
                if (s[i] != s[end]) i++;
                else {
                    start++;
                    end--;
                    break;
                }
            }
            maxLength = max(maxLength, end - start + 1);
        }
        return (len > 0) ? maxLength : 0;
    }
};

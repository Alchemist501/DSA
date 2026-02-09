class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        maxlen = 0
        sub = set()
        for end in range(len(s)):
            while s[end] in sub:
                sub.remove(s[start])
                start += 1
            sub.add(s[end])
            maxlen = max(maxlen, len(sub))
        return maxlen
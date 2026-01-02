class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res = []
        part = []

        def palindromeCheck(s):
            return s == s[::-1]

        def backTrack(idx):
            if idx == len(s):
                res.append(part.copy())
                return
            for i in range(idx, len(s)):
                if palindromeCheck(s[idx : i + 1]):
                    part.append(s[idx : i + 1])
                    backTrack(i + 1)
                    part.pop()

        backTrack(0)
        return res

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = strs[0]
        for i in strs[1:]:
            prefix = prefix[:len(i)]
            for ch in range(len(i)):
                if ch < len(prefix) and i[ch] != prefix[ch]:
                    prefix = prefix[:ch]
                    break
        return prefix
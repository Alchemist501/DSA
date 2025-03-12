//Problem Description := https://leetcode.com/problems/permutation-in-string
class Solution {
    public:
        bool checkInclusion(string s1, string s2) {
            bool flag = true;
            int freq1[26] = {0};
            int n = s1.length();
            int N = s2.length();
            for (int i = 0; i < n; i++) {
                freq1[s1.at(i) - 'a']++;
            }
            for (int i = 0; i < N - n; i++) {
                int freq2[26] = {0};
                for (int j = i; j < n + i; j++) {
                    freq2[s2.at(j) - 'a']++;
                }
                flag = true;
                for(int j = 0; j < 26; j++){
                    if(freq1[j] != freq2[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag == true) return flag;
        }
        return false;
    }
};
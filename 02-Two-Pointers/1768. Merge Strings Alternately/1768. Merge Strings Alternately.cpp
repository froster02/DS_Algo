1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        int m = word1.size(), n = word2.size();
5        string ans = ;
6
7        for (int i = 0; i < max(m, n); i++) {
8            if (i < m)
9                ans += word1[i];
10            if (i < n)
11                ans += word2[i];
12        }
13
14        return ans;
15    }
16};
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        int n1 = word1.size();
5        int n2 = word2.size();
6        string ans;
7        for (int i = 0; i < max(n1, n2); i++) {
8            if (i < n1)
9                ans += word1[i];
10            if (i < n2)
11                ans += word2[i];
12        }
13
14        return ans;
15    }
16};
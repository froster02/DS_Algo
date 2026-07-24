1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int n = s.length();
5        int ans = 0;
6
7        for (int i = 0; i < n; i++) {
8            vector<bool> visited(256, false);
9            for (int j = i; j < n; j++) {
10                if (visited[s[j]])
11                    break;
12                visited[s[j]] = true;
13                ans = max(ans, j - i + 1);
14            }
15        }
16        return ans;
17    }
18};
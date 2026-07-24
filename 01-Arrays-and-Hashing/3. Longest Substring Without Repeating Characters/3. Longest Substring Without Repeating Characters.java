1class Solution {
2    public int lengthOfLongestSubstring(String s) {
3        int n = s.length();
4        int ans = 0;
5
6        for (int i = 0; i < n; i++) {
7            boolean[] visited = new boolean[256];
8            for (int j = i; j < n; j++) {
9                if (visited[s.charAt(j)]) {
10                    break;
11                }
12
13                visited[s.charAt(j)] = true;
14                ans = Math.max(ans, (j - i + 1));
15            }
16        }
17
18        return ans;
19    }
20}
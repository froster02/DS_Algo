1class Solution {
2    public boolean isSubsequence(String s, String t) {
3        int i = 0;
4        int j = 0;
5
6        int m = s.length();
7        int n = t.length();
8
9        while (i < m && j < n) {
10            if (s.charAt(i) == t.charAt(j)) {
11                i++;
12            }
13            j++;
14        }
15
16        return (i == m);
17    }
18}
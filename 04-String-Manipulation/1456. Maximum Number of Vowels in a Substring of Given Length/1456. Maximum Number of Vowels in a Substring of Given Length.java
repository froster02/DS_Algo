1class Solution {
2
3    boolean solve(char ch) {
4        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
5            return true;
6        }
7
8        return false;
9    }
10
11    public int maxVowels(String s, int k) {
12        int n = s.length();
13        int cnt = 0, maxi = 0;
14
15        for (int i = 0; i < k; i++) {
16            if (solve(s.charAt(i)))
17                cnt++;
18        }
19
20        maxi = cnt;
21
22        for (int i = k; i < n; i++) {
23            if (solve(s.charAt(i)))
24                cnt++; // right enters
25            if (solve(s.charAt(i - k)))
26                cnt--; // left leaves
27            maxi = Math.max(maxi, cnt);
28        }
29
30        return maxi;
31    }
32}
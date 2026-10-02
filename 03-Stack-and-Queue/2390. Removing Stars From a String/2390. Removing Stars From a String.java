1class Solution {
2    public String removeStars(String s) {
3
4        Deque<Character> stk = new ArrayDeque<>();
5
6        int n = s.length();
7        for (int i = 0; i < n; i++) {
8            if (s.charAt(i) == '*' && stk.size() != 0) {
9                stk.pop();
10            } else {
11                stk.push(s.charAt(i));
12            }
13
14        }
15
16        StringBuilder ans = new StringBuilder();
17        while (!stk.isEmpty()) {
18            ans.append(stk.pop());
19        }
20
21        return ans.reverse().toString();
22    }
23}
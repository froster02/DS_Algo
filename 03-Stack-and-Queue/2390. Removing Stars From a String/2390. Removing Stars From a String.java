1class Solution {
2    public String removeStars(String s) {
3        Deque<Character> stk = new ArrayDeque<>();
4        int n = s.length();
5
6        for (int i = 0; i < n; i++) {
7            if (s.charAt(i) == '*') {
8                stk.pop();
9            } else {
10                stk.push(s.charAt(i));
11            }
12        }
13
14        StringBuilder ans = new StringBuilder();
15        while (!stk.isEmpty()) {
16            ans.append(stk.pop());
17        }
18
19        return ans.reverse().toString();
20    }
21}
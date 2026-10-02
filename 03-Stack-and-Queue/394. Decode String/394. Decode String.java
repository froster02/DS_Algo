1class Solution {
2    public String decodeString(String s) {
3        Deque<Character> stk = new ArrayDeque<>();
4        String str = ;
5        String count = ;
6
7        for (int i = 0; i < s.length(); i++) {
8            if (s.charAt(i) == ']') {
9                while (stk.peek() != '[') {
10                    //pop the char and create str.
11                    str = stk.pop() + str;
12                }
13
14                //pop the ']' bracket
15                stk.pop();
16
17                //fetch the numeric value before [], e.g. 3[ac]
18                while (!stk.isEmpty() && Character.isDigit(stk.peek())) {
19                    count = stk.pop() + count;
20                }
21
22                int c = Integer.parseInt(count);
23                //multiple the character by the c, e.g. 3[ac] = acacac and then push it into stack
24                while (c-- > 0) {
25                    for (char it : str.toCharArray()) {
26                        stk.push(it);
27                    }
28                }
29
30                //reset both
31                str = ;
32                count = ;
33            } else {
34                //push into stack the iterating 's'
35                stk.push(s.charAt(i));
36            }
37        }
38
39        StringBuilder ans = new StringBuilder();
40        while (!stk.isEmpty()) {
41            ans.append(stk.pop());
42        }
43
44        return ans.reverse().toString();
45    }
46}
1class Solution {
2    public int[] asteroidCollision(int[] asteroids) {
3        Deque<Integer> stk = new ArrayDeque<>();
4
5        for (int curr : asteroids) {
6            while (!stk.isEmpty() && stk.peek() > 0 && curr < 0) {
7                int top = stk.peek();
8                if (top < Math.abs(curr)) {
9                    stk.pop();
10                } else if (top == Math.abs(curr)) {
11                    stk.pop();
12                    curr = 0;
13                } else {
14                    curr = 0;
15                }
16                if (curr == 0)
17                    break;
18            }
19            if (curr != 0)
20                stk.push(curr);
21        }
22
23        int[] result = new int[stk.size()];
24        for (int i = result.length - 1; i >= 0; i--) {
25            result[i] = stk.pop();
26        }
27        return result;
28    }
29}
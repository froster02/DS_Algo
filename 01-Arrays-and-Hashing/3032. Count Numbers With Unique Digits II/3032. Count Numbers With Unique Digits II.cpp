1class Solution {
2public:
3    bool check(int x) {
4        int visi[10] = {0};
5
6        while (x) {
7            int d = x % 10;
8
9            if (visi[d])
10                return false;
11
12            visi[d] = 1;
13            x = x / 10;
14        }
15
16        return true;
17    }
18
19    int numberCount(int a, int b) {
20        int ans = 0;
21
22        for (int i = a; i <= b; i++) {
23            if (check(i)) {
24                ans++;
25            }
26        }
27
28        return ans;
29    }
30};
1class Solution {
2public:
3    int cntBits(int x) {
4        int cnt = 0;
5
6        while (x > 0) {
7            cnt = cnt + (x & 1); // check last bit
8            x = x >> 1;
9        }
10
11        return cnt;
12    }
13
14    int tripletCount(vector<int>& a, vector<int>& b, vector<int>& c) {
15        int ans = 0;
16
17        for (int x : a) {
18            for (int y : b) {
19                for (int z : c) {
20                    int xr = x ^ y ^ z;
21
22                    if (cntBits(xr) % 2 == 0)
23                        ans++;
24                }
25            }
26        }
27
28        return ans;
29    }
30};
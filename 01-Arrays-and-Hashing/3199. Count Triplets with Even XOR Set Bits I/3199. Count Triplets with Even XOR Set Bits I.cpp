1class Solution {
2public:
3    int tripletCount(vector<int>& a, vector<int>& b, vector<int>& c) {
4        int ans = 0;
5
6        for (int x : a) {
7            for (int y : b) {
8                for (int z : c) {
9                    int xr = x ^ y ^ z;
10
11                    if (__builtin_popcount(xr) % 2 == 0)
12                        ans++;
13                }
14            }
15        }
16
17        return ans;
18    }
19};
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int> left(n);
7        left[0] = 1;
8        for (int i = 1; i < n; i++) {
9            left[i] = left[i - 1] * nums[i - 1];
10        }
11
12        vector<int> right(n);
13        right[n - 1] = 1;
14        for (int i = n - 2; i >= 0; i--) {
15            right[i] = right[i + 1] * nums[i + 1];
16        }
17
18        vector<int> result(n);
19        for (int i = 0; i < n; i++) {
20            result[i] = left[i] * right[i];
21        }
22
23        return result;
24    }
25};
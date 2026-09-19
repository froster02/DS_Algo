1class Solution {
2    public int longestSubarray(int[] nums) {
3        int n = nums.length;
4        // sliding window
5        int maxi = 0;
6        int cnt = 0;
7        int lft = 0;
8
9        for (int rt = 0; rt < n; rt++) {
10            if (nums[rt] == 0) {
11                cnt++;
12            }
13
14            if (cnt > 1) {
15                if (nums[lft] == 0) {
16                    cnt--;
17                }
18                lft++;
19            }
20
21            maxi = Math.max(maxi, rt - lft);
22        }
23        return maxi;
24    }
25}
1class Solution {
2    public int longestOnes(int[] nums, int k) {
3        int n = nums.length;
4        int left = 0;
5        int cnt = 0;
6        int maxi = 0;
7
8        for (int i = 0; i < n; i++) {
9            if (nums[i] == 0) {
10                cnt++;
11            }
12
13            while (cnt > k) {
14                if (nums[left] == 0) {
15                    cnt--;
16                }
17                left++;
18            }
19
20            maxi = Math.max(maxi, i - left + 1);
21        }
22
23        return maxi;
24    }
25}
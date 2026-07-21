1class Solution {
2    public int findMaxConsecutiveOnes(int[] nums) {
3        int n = nums.length;
4        int count = 0;
5        int maxi = 0;
6        for (int i = 0; i < n; i++) {
7            if (nums[i] == 1) {
8                count++;
9                maxi = Math.max(maxi, count);
10            } else {
11                count = 0;
12            }
13        }
14
15        return maxi;
16    }
17}
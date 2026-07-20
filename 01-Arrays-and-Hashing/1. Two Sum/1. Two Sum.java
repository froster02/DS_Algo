1class Solution {
2    public int[] twoSum(int[] nums, int target) {
3        int n = nums.length;
4
5        for (int i = 0; i < n; i++) {
6            for (int j = i + 1; j < n; j++) {
7                if (nums[i] + nums[j] == target) {
8                    return new int[] { i, j };
9                }
10            }
11        }
12
13        return new int[] {};
14    }
15}
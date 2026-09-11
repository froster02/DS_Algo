1class Solution {
2    public void moveZeroes(int[] nums) {
3        int n = nums.length;
4        int left = 0;
5
6        for (int right = 0; right < n; right++) {
7            if (nums[right] != 0) {
8                int temp = nums[right];
9                nums[right] = nums[left];
10                nums[left] = temp;
11                left++;
12            }
13        }
14    }
15}
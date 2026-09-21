1class Solution {
2    public int pivotIndex(int[] nums) {
3        int n = nums.length;
4
5        int totalSum = 0;
6        for (int num : nums)
7            totalSum += num;
8
9        int leftSum = 0;
10
11        for (int i = 0; i < n; i++) {
12            int rightSum = totalSum - leftSum - nums[i];
13
14            if (leftSum == rightSum)
15                return i;
16
17            leftSum += nums[i];
18        }
19
20        return -1;
21    }
22}
1class Solution {
2    public double findMaxAverage(int[] nums, int k) {
3        int n = nums.length;
4
5        int sum = 0;
6        for (int i = 0; i < k; i++) {
7            sum += nums[i];
8        }
9
10        int maxi = sum;
11        for (int i = k; i < n; i++) {
12            sum = sum + nums[i];
13            sum = sum - nums[i - k];
14
15            maxi = Math.max(maxi, sum);
16        }
17
18        return (double) maxi / k;
19    }
20}
1class Solution {
2    public boolean increasingTriplet(int[] nums) {
3        int n = nums.length;
4
5        int i = Integer.MAX_VALUE;
6        int j = Integer.MAX_VALUE;
7
8        for (int x = 0; x < n; x++) {
9            if (nums[x] <= i) {
10                i = nums[x];
11            } else if (nums[x] <= j) {
12                j = nums[x];
13            } else {
14                return true;
15            }
16        }
17
18        return false;
19    }
20}
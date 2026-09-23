1class Solution {
2    public int findMiddleIndex(int[] nums) {
3        int n = nums.length;
4
5        //prefixSum
6        int prefixSum = 0;
7
8        for (int x : nums) {
9            prefixSum += x;
10        }
11
12        int leftSum = 0;
13        for (int i = 0; i < n; i++) {
14
15            //running sum of Right side
16            int rightSum = prefixSum - leftSum - nums[i];
17
18            //Solu : if found the Pivot point.
19            if (leftSum == rightSum) {
20                return i;
21            }
22
23            //running sum of Left side
24            leftSum = leftSum + nums[i];
25        }
26
27        return -1;
28    }
29}
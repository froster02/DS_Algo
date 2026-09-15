1class Solution {
2    public int maxOperations(int[] nums, int k) {
3
4        Arrays.sort(nums);
5
6        int n = nums.length;
7
8        int l = 0;
9        int r = n - 1;
10        int cnt = 0;
11
12        while (l < r) {
13            if (nums[l] + nums[r] == k) {
14                l++;
15                r--;
16                cnt++;
17            } else if (nums[l] + nums[r] > k) {
18                r--;
19            } else {
20                l++;
21            }
22        }
23
24        return cnt;
25    }
26}
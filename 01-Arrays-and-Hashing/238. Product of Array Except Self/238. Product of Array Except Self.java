1class Solution {
2    public int[] productExceptSelf(int[] nums) {
3        int n = nums.length;
4        int[] prefix = new int[n];
5        int[] suffix = new int[n];
6        int[] result = new int[n];
7
8        // prefix[i] = product of nums[0..i]
9        prefix[0] = 1;
10        for (int i = 1; i < n; i++) {
11            prefix[i] = prefix[i - 1] * nums[i - 1];
12        }
13
14        // suffix[i] = product of nums[i..n-1]
15        suffix[n - 1] = 1;
16        for (int i = n - 2; i >= 0; i--) {
17            suffix[i] = suffix[i + 1] * nums[i + 1];
18        }
19
20        // answer[i] = left product * right product
21        for (int i = 0; i < n; i++) {
22            result[i] = prefix[i] * suffix[i];
23        }
24
25        return result;
26    }
27}
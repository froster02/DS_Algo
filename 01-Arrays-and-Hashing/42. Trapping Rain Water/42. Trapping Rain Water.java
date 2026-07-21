1class Solution {
2    public int trap(int[] height) {
3        int n = height.length;
4
5        // Create two arrays to store left and right maximums
6        int[] leftMax = new int[n];
7        int[] rightMax = new int[n];
8
9        // Running maximum from left to right
10        leftMax[0] = height[0];
11        for (int i = 1; i < n; i++) {
12            leftMax[i] = Math.max(leftMax[i - 1], height[i]);
13        }
14
15        // Running maximum from right to left
16        rightMax[n - 1] = height[n - 1];
17        for (int i = n - 2; i >= 0; i--) {
18            rightMax[i] = Math.max(height[i], rightMax[i + 1]);
19        }
20
21        int ans = 0;
22
23        // Water trapped at each index
24        for (int i = 0; i < n; i++) {
25            ans += Math.min(leftMax[i], rightMax[i]) - height[i];
26        }
27
28        return ans;
29    }
30}
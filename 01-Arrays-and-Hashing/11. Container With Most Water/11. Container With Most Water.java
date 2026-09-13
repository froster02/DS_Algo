1class Solution {
2    public int maxArea(int[] height) {
3        // area = l * w;
4
5        int n = height.length;
6
7        int left = 0;
8        int right = n - 1;
9
10        int maxArea = 0;
11        while (left < right) {
12
13            //height
14            int minHeight = Math.min(height[left], height[right]);
15            //width
16            int width = right - left;
17            //area
18            int area = minHeight * width;
19
20            //find max area amoung!
21            maxArea = Math.max(maxArea, area);
22
23            //find the max height pillers so that area is more.
24            if (height[left] < height[right]) {
25                left++;
26            } else {
27                right--;
28            }
29        }
30
31        return maxArea;
32    }
33}
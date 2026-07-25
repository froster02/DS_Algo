1class Solution {
2    public int search(int[] nums, int target) {
3        int n = nums.length;
4
5        int start = 0;
6        int end = n - 1;
7
8        while (start <= end) {
9
10            int mid = start + (end - start) / 2;
11
12            if(nums[mid] == target)
13                return mid;
14
15            // if the array is rotated, at least one half is always sorted.
16            // now here I'll figure out which half is sorted
17
18            // check if the left half is sorted or the right half
19
20            // left sorted
21            if (nums[start] <= nums[mid]) {
22
23                if (nums[start] <= target && target <= nums[mid]) {
24                    end = mid - 1;
25                } else {
26                    start = mid + 1;
27                }
28            // right sorted
29            } else {
30                if (nums[mid] <= target && target <= nums[end]) {
31                    start = mid + 1;
32                } else {
33                    end = mid - 1;
34                }
35            }
36
37        }
38        return -1;
39    }
40}
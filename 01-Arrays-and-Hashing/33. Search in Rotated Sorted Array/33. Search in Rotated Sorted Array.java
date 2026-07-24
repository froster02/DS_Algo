1class Solution {
2    public int search(int[] nums, int target) {
3        int n = nums.length;
4
5        for(int i = 0; i < n; i++){
6            if(nums[i] == target){
7                return i;
8            }
9        }
10
11        return -1;
12    }
13}
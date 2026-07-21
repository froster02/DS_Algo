1class Solution {
2    public int subarraySum(int[] nums, int k) {
3        int n = nums.length;
4        int count = 0;
5
6        for(int i = 0; i < n; i++){
7            int sum = 0;
8            for(int j = i; j < n; j++){
9                sum += nums[j];
10                if(sum == k)    
11                    count++;
12            }
13        }
14
15        return count;
16    }
17}
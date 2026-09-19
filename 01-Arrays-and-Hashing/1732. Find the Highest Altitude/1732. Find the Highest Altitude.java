1class Solution {
2    public int largestAltitude(int[] gain) {
3        int n = gain.length;
4
5        int[] prefixSum = new int[n + 1];
6        prefixSum[0] = 0;
7        int maxi = 0;
8
9        for (int i = 1; i <= n; i++) {                       
10            prefixSum[i] = gain[i - 1] + prefixSum[i - 1];     
11
12            maxi = Math.max(prefixSum[i], maxi);
13        }
14
15        return maxi;
16    }
17}
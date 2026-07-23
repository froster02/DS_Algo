1class Solution {
2    public int subarraySum(int[] nums, int k) {
3        int n = nums.length;
4
5        // Maps a prefix sum value -> how many times it has occurred so far
6        Map<Integer, Integer> map = new HashMap<>();
7
8        int prefixSum = 0; // running sum from index 0 up to current index
9        int count = 0; // total number of valid subarrays found so far
10
11        // Base case: a prefix sum of 0 has occurred once, before the array
12        // even starts. This is what lets us correctly count subarrays that
13        // begin at index 0 and sum exactly to k.
14        map.put(0, 1);
15
16        for (int i = 0; i < n; i++) {
17
18            // Extend the running sum to include the current element
19            prefixSum = prefixSum + nums[i];
20
21            // We want: prefixSum - somePreviousPrefixSum = k
22            // Rearranged: somePreviousPrefixSum = prefixSum - k
23            // remove is the value we need to have seen before, right now.
24            int remove = prefixSum - k;
25
26            // If that earlier prefix sum value exists, every time it
27            // occurred marks the start of a valid subarray ending at i.
28            // Add ALL of those occurrences at once, not just one.
29            if (map.containsKey(remove)) {
30                count = count + map.get(remove);
31            }
32
33            // Now record that the CURRENT prefixSum has occurred one more time.
34            int freq = 0;
35
36            if (map.containsKey(prefixSum)) {
37                freq = map.get(prefixSum); // how many times it occurred before now
38            } else {
39                freq = 0; // never occurred before now
40            }
41
42            freq++; // account for THIS occurrence, happening right now
43            map.put(prefixSum, freq); // save the updated frequency back
44        }
45
46        // Total count of subarrays whose sum equals k
47        return count;
48    }
49}
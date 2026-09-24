1class Solution {
2    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
3        Set<Integer> st1 = new HashSet<>();
4        Set<Integer> st2 = new HashSet<>();
5
6        // fill nums1 values to set
7        for (int itr : nums1) {
8            st1.add(itr);
9        }
10
11        // fill nums2 values to set
12        for (int itr : nums2) {
13            st2.add(itr);
14        }
15
16        List<Integer> diff1 = new ArrayList<>();
17        List<Integer> diff2 = new ArrayList<>();
18
19        for (int itr : st1) {
20            if (!st2.contains(itr)) {
21                diff1.add(itr);
22            }
23        }
24
25        for (int itr : st2) {
26            if (!st1.contains(itr)) {
27                diff2.add(itr);
28            }
29        }
30
31        return List.of(diff1, diff2);
32    }
33}
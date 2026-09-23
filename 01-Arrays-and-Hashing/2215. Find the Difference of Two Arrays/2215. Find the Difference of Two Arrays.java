1class Solution {
2    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
3        Set<Integer> m1 = new HashSet<>();
4        Set<Integer> m2 = new HashSet<>();
5
6        for (int num : nums1)
7            m1.add(num);
8        for (int num : nums2)
9            m2.add(num);
10
11        List<Integer> diff1 = new ArrayList<>();
12        List<Integer> diff2 = new ArrayList<>();
13
14        for (int itr : m1) {
15            if (!m2.contains(itr))
16                diff1.add(itr);
17        }
18
19        for (int itr : m2) {
20            if (!m1.contains(itr))
21                diff2.add(itr);
22        }
23
24        return List.of(diff1, diff2);
25    }
26}
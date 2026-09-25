1class Solution {
2    public boolean closeStrings(String word1, String word2) {
3        int l1 = word1.length();
4        int l2 = word2.length();
5
6        if (l1 != l2) {
7            return false;
8        }
9
10        Map<Character, Integer> mp1 = new HashMap<>();
11        Map<Character, Integer> mp2 = new HashMap<>();
12
13        for (char c : word1.toCharArray()) {
14            mp1.put(c, mp1.getOrDefault(c, 0) + 1);
15        }
16
17        for (char c : word2.toCharArray()) {
18            mp2.put(c, mp2.getOrDefault(c, 0) + 1);
19        }
20
21        //check if same set of character are there or not
22        if (!mp1.keySet().equals(mp2.keySet()))
23            return false;
24
25        List<Integer> freq1 = new ArrayList<>(mp1.values());
26        List<Integer> freq2 = new ArrayList<>(mp2.values());
27
28        Collections.sort(freq1);
29        Collections.sort(freq2);
30
31        return freq1.equals(freq2);
32    }
33}
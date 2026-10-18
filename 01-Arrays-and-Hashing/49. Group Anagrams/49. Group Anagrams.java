1class Solution {
2    public List<List<String>> groupAnagrams(String[] strs) {
3        Map<String, List<String>> umap = new HashMap<>();
4
5        for (String word : strs) {
6            char[] temp = word.toCharArray();
7            Arrays.sort(temp);
8
9            String key = new String(temp); // char[] uses reference equality, String overrides equals/hashCode for content match
10
11            umap.computeIfAbsent(key, k -> new ArrayList<>()).add(word);
12        }
13
14        return new ArrayList<>(umap.values());
15    }
16}
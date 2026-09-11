1class Solution {
2    public int shortestDistance(String[] wordsDict, String word1, String word2) {
3        int idx1 = -1, idx2 = -1;
4        int minDist = Integer.MAX_VALUE;
5
6        for (int i = 0; i < wordsDict.length; i++) {
7            if (wordsDict[i].equals(word1)) {
8                idx1 = i;
9            } else if (wordsDict[i].equals(word2)) {
10                idx2 = i;
11            }
12
13            if (idx1 != -1 && idx2 != -1) {
14                minDist = Math.min(minDist, Math.abs(idx1 - idx2));
15            }
16        }
17
18        return minDist;
19    }
20}
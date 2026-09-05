1class Solution {
2    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
3        // kids    [1,2,3,4,5,6,...]
4        // candies [1,2,4,8,1,3,...]
5        // ExtraCandies...
6        int highestCandies = Arrays.stream(candies).max().getAsInt();
7
8        List<Boolean> ans = new ArrayList<>();
9
10        for (int i = 0; i < candies.length; i++) {
11            ans.add(candies[i] + extraCandies >= highestCandies);
12        }
13
14        return ans;
15    }
16}
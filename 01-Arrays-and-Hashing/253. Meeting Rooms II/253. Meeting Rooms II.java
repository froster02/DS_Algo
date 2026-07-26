1class Solution {
2    public int minMeetingRooms(int[][] intervals) {
3        // sort based on first idx.
4        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
5
6        PriorityQueue<Integer> pq = new PriorityQueue<>();
7
8        for (int[] itr : intervals) {
9
10            if (pq.isEmpty()) {
11                pq.add(itr[1]);
12                continue;
13            }
14
15            if (itr[0] >= pq.peek()) {
16                pq.remove();
17            }
18
19            pq.add(itr[1]);
20        }
21
22        return pq.size();
23    }
24}
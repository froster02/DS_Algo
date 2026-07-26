1class Solution {
2    public int minMeetingRooms(int[][] intervals) {
3        // sort based on first idx.
4        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
5
6        PriorityQueue<Integer> pq = new PriorityQueue<>();
7
8        for(int[] it : intervals){
9            if(!pq.isEmpty() && it[0] >= pq.peek()){
10                pq.poll();
11            }
12            pq.offer(it[1]);
13        }
14
15        return pq.size();
16    }
17}
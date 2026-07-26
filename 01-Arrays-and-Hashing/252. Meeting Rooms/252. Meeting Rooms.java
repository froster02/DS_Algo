1class Solution {
2    public boolean canAttendMeetings(int[][] intervals) {
3        int n = intervals.length;
4
5        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
6
7        for (int i = 1; i < n; i++) {
8            if (intervals[i - 1][1] > intervals[i][0]) {
9                return false;
10            }
11        }
12
13        return true;
14    }
15}
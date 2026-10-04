1class RecentCounter {
2
3    Deque<Integer> q;
4
5    public RecentCounter() {
6        q = new ArrayDeque<>();
7    }
8
9    public int ping(int t) {
10        // add to back of the queue, add to Tail
11        q.offer(t);
12
13        //peek() : look at front & remove old ping.
14        while (q.peek() < (t - 3000)) {
15            q.poll();
16        }
17
18        return q.size();
19    }
20}
21
22/**
23 * Your RecentCounter object will be instantiated and called as such:
24 * RecentCounter obj = new RecentCounter();
25 * int param_1 = obj.ping(t);
26 */
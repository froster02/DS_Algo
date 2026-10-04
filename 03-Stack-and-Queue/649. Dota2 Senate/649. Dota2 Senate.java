1class Solution {
2    public String predictPartyVictory(String senate) {
3
4        int n = senate.length();
5
6        Queue<Integer> rQueue = new LinkedList<>();
7        Queue<Integer> dQueue = new LinkedList<>();
8
9        // Populate the Queues
10        for (int i = 0; i < n; i++) {
11            if (senate.charAt(i) == 'R') {
12                rQueue.add(i);
13            } else {
14                dQueue.add(i);
15            }
16        }
17
18        while (!rQueue.isEmpty() && !dQueue.isEmpty()) {
19
20            // Pop the Next-Turn Senate from both Q.
21            int rTurn = rQueue.poll();
22            int dTurn = dQueue.poll();
23
24            if (dTurn < rTurn) {
25                dQueue.add(dTurn + n);
26            } else {
27                rQueue.add(rTurn + n);
28            }
29        }
30
31        return rQueue.isEmpty() ? Dire : Radiant;
32    }
33}